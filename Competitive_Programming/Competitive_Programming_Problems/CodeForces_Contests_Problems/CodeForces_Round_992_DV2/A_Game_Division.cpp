#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        unordered_set<int> mods;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            mods.insert(a[i] % k);
        }

        if (mods.size() == 1) {
            // All elements are congruent modulo k
            cout << "NO\n";
        } else {
            // We can choose any index
            cout << "YES\n";
            cout << 1 << "\n"; // Always pick the first index for simplicity
        }
    }

    return 0;
}
