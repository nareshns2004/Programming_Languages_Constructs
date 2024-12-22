#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        int maxDiff = 0;
        int sumA = 0, sumB = 0;
        for (int i = 0; i < n; i++) {
            sumA += a[i];
            if (i > 0) {
                sumB += b[i - 1];
            }
            maxDiff = max(maxDiff, sumA - sumB);
        }

        cout << maxDiff << endl;
    }
    return 0;
}