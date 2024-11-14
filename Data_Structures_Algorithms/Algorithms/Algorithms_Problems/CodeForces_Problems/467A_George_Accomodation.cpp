#include <iostream>
using namespace std;

int main() {
    int n; // number of rooms
    cin >> n;

    int count = 0; // counter for rooms with enough space
    for (int i = 0; i < n; i++) {
        int p, q; // p is current people, q is room capacity
        cin >> p >> q;

        // Check if the room can accommodate George and Alex
        if (q - p >= 2) {
            count++;
        }
    }

    cout << count << endl; // output the result
    return 0;
}
