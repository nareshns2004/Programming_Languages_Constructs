#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    int odd_misplaced = 0, even_misplaced = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i % 2 != a[i] % 2) {
            if (i % 2 == 0) even_misplaced++;
            else odd_misplaced++;
        }
    }
    
    if (even_misplaced == odd_misplaced) {
        cout << even_misplaced << "\n";
    } else {
        cout << -1 << "\n";
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
