#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> teams(n);

    // Reading the uniform colors for each team
    for (int i = 0; i < n; ++i) {
        cin >> teams[i].first >> teams[i].second; // hi (home) and ai (guest)
    }

    int guestUniformCount = 0;

    // Count the number of games where the host team wears guest uniform
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i != j && teams[i].first == teams[j].second) {
                guestUniformCount++;
            }
        }
    }

    cout << guestUniformCount << endl;

    return 0;
}
