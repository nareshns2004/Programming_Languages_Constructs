#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

const int MOD = 998244353;

void solve() {
    int n, q;
    cin >> n >> q;

    vector<long long> a(n), b(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    // Multisets to keep track of current state of min(ai, bi)
    multiset<long long> minSet;
    for (int i = 0; i < n; ++i) {
        minSet.insert(min(a[i], b[i]));
    }

    // Calculate initial product modulo MOD
    long long currentProduct = 1;
    for (const auto& val : minSet) {
        currentProduct = (currentProduct * val) % MOD;
    }

    cout << currentProduct << " ";

    while (q--) {
        int o, x;
        cin >> o >> x;
        --x; // Convert to 0-based index

        // Remove old min(a[x], b[x])
        minSet.erase(minSet.find(min(a[x], b[x])));

        // Update a[x] or b[x]
        if (o == 1) {
            a[x]++;
        } else {
            b[x]++;
        }

        // Insert new min(a[x], b[x])
        minSet.insert(min(a[x], b[x]));

        // Recalculate product modulo MOD
        currentProduct = 1;
        for (const auto& val : minSet) {
            currentProduct = (currentProduct * val) % MOD;
        }

        cout << currentProduct << " ";
    }

    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
