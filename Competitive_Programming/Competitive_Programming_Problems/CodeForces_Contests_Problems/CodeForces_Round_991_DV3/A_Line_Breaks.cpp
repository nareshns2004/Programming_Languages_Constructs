#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        string words[n];
        for (int i = 0; i < n; i++) {
            cin >> words[i];
        }

        int count = 0;
        int length = 0;

        for (int i = 0; i < n; i++) {
            if (length + words[i].length() <= m) {
                length += words[i].length();
                count++;
            } else {
                break;
            }
        }

        cout << count << endl;
    }

    return 0;
}