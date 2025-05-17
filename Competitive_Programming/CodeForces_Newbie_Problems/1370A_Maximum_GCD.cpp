#include <iostream>
#include <vector>
using namespace std;

int solve(int n) {
    // For any n, the maximum GCD will be at least ⌊n/2⌋
    // This is because we can always choose (⌊n/2⌋, n) as our pair
    // The GCD of these two numbers is at least ⌊n/2⌋
    
    // For example, if n is even: n/2 and n have GCD of n/2
    // If n is odd: (n-1)/2 and n-1 have GCD of (n-1)/2
    
    return n / 2;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
    
    return 0;
}