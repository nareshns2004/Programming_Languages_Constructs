#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int getMaxScore(const vector<int>& a, int n) {
    // The maximum element in the array
    int maxElement = *max_element(a.begin(), a.end());
    
    // The score can be at least the maximum element because we can color only this one element
    int maxScore = maxElement;
    
    // Count how many red elements we can choose without choosing adjacent ones
    int redElements = 0;
    for (int i = 0; i < n; i += 2) {
        redElements++;
    }

    // The score is maximum element + the number of red elements
    return maxElement + redElements;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Output the maximum score
        cout << getMaxScore(a, n) << endl;
    }

    return 0;
}
