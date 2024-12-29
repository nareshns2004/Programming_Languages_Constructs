#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Impression {
    int l, r, index;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<Impression> impressions(n);
        for (int i = 0; i < n; ++i) {
            cin >> impressions[i].l >> impressions[i].r;
            impressions[i].index = i;
        }

        // Sort impressions by their range (l, then r)
        sort(impressions.begin(), impressions.end(), [](const Impression &a, const Impression &b) {
            return (a.l < b.l) || (a.l == b.l && a.r < b.r);
        });

        vector<int> result(n, 0);
        vector<int> maxRight(n, 0);

        // Compute maxRight for faster checking
        maxRight[0] = impressions[0].r;
        for (int i = 1; i < n; ++i) {
            maxRight[i] = max(maxRight[i - 1], impressions[i].r);
        }

        // Check uniqueness for each impression
        for (int i = 0; i < n; ++i) {
            int l = impressions[i].l, r = impressions[i].r, idx = impressions[i].index;
            bool unique = true;

            // Check if there's any overlapping range
            if (i > 0 && maxRight[i - 1] >= l) {
                unique = false;
            }
            if (i < n - 1 && impressions[i + 1].l <= r) {
                unique = false;
            }

            result[idx] = unique ? 1 : 0;
        }

        for (int i = 0; i < n; ++i) {
            cout << result[i];
        }
        cout << '\n';
    }

    return 0;
}
