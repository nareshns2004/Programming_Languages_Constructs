#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> grid(n, string(m, '.'));

    for (int i = 0; i < n; ++i) {
        if (i % 4 == 0) {
            // Fill the entire row with '#'
            grid[i] = string(m, '#');
        } else if (i % 4 == 1) {
            // Only the last column is '#'
            grid[i][m - 1] = '#';
        } else if (i % 4 == 3) {
            // Only the first column is '#'
            grid[i][0] = '#';
        }
    }

    for (const auto& row : grid) {
        cout << row << endl;
    }

    return 0;
}
