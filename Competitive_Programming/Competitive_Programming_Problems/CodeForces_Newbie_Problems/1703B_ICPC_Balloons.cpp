#include <iostream>
#include <unordered_set>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;

    unordered_set<char> solved;
    int totalBalloons = 0;

    for (char c : s) {
        if (solved.find(c) == solved.end()) {
            totalBalloons += 2;  // First time solving this problem
            solved.insert(c);
        } else {
            totalBalloons += 1;  // Problem already solved before
        }
    }

    cout << totalBalloons << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
