#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    int total_sum = 0;
    int odd_count = 0;
    int even_count = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total_sum += a[i];
        if (a[i] % 2 == 1) {
            odd_count++;
        } else {
            even_count++;
        }
    }
    
    // Case 1: If total sum is even
    if (total_sum % 2 == 0) {
        // For two groups with even parity, we need either:
        // - At least 2 odd numbers (can put one odd number in each group)
        // - All even numbers (but that means we can't split to get two even sums since all elements have same parity)
        if (odd_count >= 2) {
            cout << "YES" << endl;
        } else if (odd_count == 0) {
            cout << "NO" << endl;  // All numbers are even
        } else {  // odd_count == 1
            cout << "NO" << endl;  // Can't split one odd number
        }
    }
    // Case 2: If total sum is odd
    else {
        // For two groups with odd parity, we need:
        // - At least 1 odd number and at least 1 even number
        if (odd_count >= 1 && even_count >= 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}