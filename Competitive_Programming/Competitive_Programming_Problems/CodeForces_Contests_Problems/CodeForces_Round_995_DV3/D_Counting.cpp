#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long x, y;
        cin >> n >> x >> y;

        vector<long long> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        
        sort(a.begin(), a.end());

        long long count = 0;
        for (int i = 0; i < n - 1; ++i) {
    
            long long sum_without_i = 0;
            for (int j = 0; j < n; ++j) {
                if (j != i) {
                    sum_without_i += a[j];
                }
            }

            for (int j = i + 1; j < n; ++j) {
                long long remaining_sum = sum_without_i - a[j];
                if (remaining_sum >= x && remaining_sum <= y) {
                    ++count;
                }
            }
        }

        cout << count << "\n";
    }

    return 0;
}
