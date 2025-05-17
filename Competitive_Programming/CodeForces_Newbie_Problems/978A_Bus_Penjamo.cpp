#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;  // Number of test cases
    cin >> t;

    while (t--) {
        int n, r;  // Number of families and number of rows
        cin >> n >> r;

        vector<int> a(n);  // Family sizes
        int total_people = 0;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            total_people += a[i];
        }

        // First, we calculate the number of happy people due to family pairs.
        int pairs = 0;  // Count of people sitting in pairs
        for (int i = 0; i < n; ++i) {
            pairs += a[i] / 2;  // Each family contributes pairs (a[i] / 2)
        }

        // The number of single persons left after pairing
        int singles = total_people - pairs * 2;

        // The number of rows available to seat people in pairs.
        // Each row has 2 seats, so we can seat at most r pairs.
        int max_pairs_in_rows = min(pairs, r);

        // After seating the pairs, how many rows are left?
        int remaining_rows = r - max_pairs_in_rows;

        // In the remaining rows, we can seat singles if any.
        int happy_singles = min(remaining_rows, singles);

        // Total happy people = pairs seated + singles seated
        int happy_people = max_pairs_in_rows * 2 + happy_singles;
        cout << happy_people << endl;
    }

    return 0;
}
