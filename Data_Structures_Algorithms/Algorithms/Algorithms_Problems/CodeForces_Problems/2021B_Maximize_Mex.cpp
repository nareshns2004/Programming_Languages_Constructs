#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int findMaxMex(vector<int>& a, int x) {
    unordered_set<int> elements(a.begin(), a.end());
    int mex = 0;

    // Increase mex while we can find it in the current set
    while (elements.find(mex) != elements.end()) {
        mex++;
    }

    // Start adding x to elements to cover the gaps and increase mex
    while (true) {
        if (elements.find(mex) == elements.end()) {
            // If mex is not in the set, check if we can achieve it by adding x
            if (mex >= x && elements.find(mex - x) != elements.end()) {
                elements.insert(mex);
            } else {
                break;
            }
        }
        mex++;
    }

    return mex;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        cout << findMaxMex(a, x) << endl;
    }

    return 0;
}
