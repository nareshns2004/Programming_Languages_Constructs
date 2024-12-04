#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

const int MOD = 1e9 + 7;
const int MAX_A = 1024; // Maximum value of a[i] is 1023, so we need up to 1024 for bit manipulation.

// Function to calculate the modular inverse using Fermat's Little Theorem
int modInverse(int a, int mod) {
    int res = 1, power = mod - 2;
    while (power) {
        if (power % 2) res = 1LL * res * a % mod;
        a = 1LL * a * a % mod;
        power /= 2;
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n), p(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> p[i];
        
        // Array to store the expected contribution of each bit
        long long result = 0;
        
        // Iterate through each bit (from 0 to 9)
        for (int bit = 0; bit < 10; bit++) {
            // Probability that this bit is set in the XOR result
            long long P_odd = 0, P_even = 1;
            
            // Iterate through each element in the array
            for (int i = 0; i < n; i++) {
                if (a[i] & (1 << bit)) {
                    long long prob = 1LL * p[i] * modInverse(10000, MOD) % MOD;
                    P_odd = (P_odd + P_even * prob % MOD) % MOD;
                    P_even = P_even * (1 - prob + MOD) % MOD;
                }
            }
            
            // Calculate the expected contribution of this bit
            long long contribution = (P_odd * (1LL << bit)) % MOD;
            result = (result + contribution * contribution % MOD) % MOD;
        }
        
        cout << result << endl;
    }
    
    return 0;
}
