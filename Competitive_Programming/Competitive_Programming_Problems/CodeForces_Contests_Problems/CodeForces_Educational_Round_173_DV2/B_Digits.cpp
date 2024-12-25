#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        vector<int> oddDigits = {1, 3, 5, 7, 9};
        for (int i : oddDigits) {
            if (d % i == 0) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}