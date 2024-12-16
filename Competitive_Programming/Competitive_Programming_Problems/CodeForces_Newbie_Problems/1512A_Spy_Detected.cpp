#include <iostream>
#include <vector>
using namespace std;

int findUniqueIndex(const vector<int>& arr) {
    int n = arr.size();
    // Check the first three elements to determine the common number
    if (arr[0] == arr[1]) {
        for (int i = 2; i < n; ++i) {
            if (arr[i] != arr[0]) {
                return i + 1; // Return 1-based index
            }
        }
    } else {
        // If the first two are not the same, compare the third to identify the unique one
        return (arr[0] == arr[2]) ? 2 : 1;
    }
    return -1; // This should never be reached
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        cout << findUniqueIndex(arr) << endl;
    }

    return 0;
}
