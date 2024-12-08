#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n == 1) {
            cout << 1 << endl;
        } else {
            int operations = (n + 1) / 2;
            cout << operations << endl;
        }
    }

    return 0;
}