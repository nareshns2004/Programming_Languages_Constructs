#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isStable(const vector<int>& segment) {
    if (segment.size() < 3) return false;
    for (size_t i = 0; i < segment.size(); ++i) {
        for (size_t j = i + 1; j < segment.size(); ++j) {
            for (size_t k = j + 1; k < segment.size(); ++k) {
                int x = segment[i], y = segment[j], z = segment[k];
                if (x + y > z && y + z > x && z + x > y) {
                    return true;
                }
            }
        }
    }
    return false;
}

bool canPartition(const vector<int>& arr) {
    int n = arr.size();
    if (n < 3) return false;

    // Check if the entire array can be a stable set
    if (isStable(arr)) {
        return true;
    }

    // Try splitting the array into two subsegments and check
    for (int i = 1; i < n; ++i) {
        vector<int> left(arr.begin(), arr.begin() + i);
        vector<int> right(arr.begin() + i, arr.end());

        if (isStable(left) && isStable(right)) {
            return true;
        }
    }

    return false;
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

        if (canPartition(arr)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
