#include <iostream>
#include <set>

using namespace std;

int main() {
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    set<int> damagedDragons;

    // Marking every k-th dragon
    for (int i = k; i <= d; i += k) {
        damagedDragons.insert(i);
    }

    // Marking every l-th dragon
    for (int i = l; i <= d; i += l) {
        damagedDragons.insert(i);
    }

    // Marking every m-th dragon
    for (int i = m; i <= d; i += m) {
        damagedDragons.insert(i);
    }

    // Marking every n-th dragon
    for (int i = n; i <= d; i += n) {
        damagedDragons.insert(i);
    }

    // The number of dragons that suffered
    cout << damagedDragons.size() << endl;

    return 0;
}
