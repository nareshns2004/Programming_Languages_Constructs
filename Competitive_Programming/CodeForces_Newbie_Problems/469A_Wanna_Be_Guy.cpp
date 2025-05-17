#include <iostream>
#include <set>
using namespace std;

int main() {
    int n; // Number of levels
    cin >> n;

    set<int> levels; // Set to store levels they can pass

    // Read Little X's levels
    int p; // Number of levels Little X can pass
    cin >> p;
    for (int i = 0; i < p; i++) {
        int level;
        cin >> level;
        levels.insert(level);
    }

    // Read Little Y's levels
    int q; // Number of levels Little Y can pass
    cin >> q;
    for (int i = 0; i < q; i++) {
        int level;
        cin >> level;
        levels.insert(level);
    }

    // Check if they can pass all levels
    if ((int)levels.size() == n) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}
