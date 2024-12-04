#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;  // number of test cases

    while (t--) {
        int n;
        cin >> n;  // size of array
        vector<int> a(n);

        // Reading the array
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Sort the array
        sort(a.begin(), a.end());

        // Check if there exists a pair with difference > 1
        bool possible = true;
        for (int i = 1; i < n; i++) {
            if (a[i] - a[i - 1] > 1) {
                possible = false;
                break;
            }
        }

        // Output the result
        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
