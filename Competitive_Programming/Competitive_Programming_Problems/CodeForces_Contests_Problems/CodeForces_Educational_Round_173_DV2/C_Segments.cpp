#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        set<int> sums;
        sums.insert(0);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += a[i];
            sums.insert(sum);
            if (a[i] != 1 && a[i] != -1) {
                sum = 0;
                sums.insert(0);
            }
        }
        cout << sums.size() << endl;
        vector<int> sortedSums(sums.begin(), sums.end());
        sort(sortedSums.begin(), sortedSums.end());
        for (int i : sortedSums) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}