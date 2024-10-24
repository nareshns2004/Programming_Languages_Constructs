#include <iostream>
using namespace std;

int main() {
    int w;
    cin >> w;

    // A watermelon can be split into two even parts if:
    // 1. The weight is even.
    // 2. The weight is greater than 2 (since 2 kg can't be divided into two even parts).
    if (w % 2 == 0 && w > 2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
