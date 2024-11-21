#include <iostream>
#include <string>
#include <unordered_set>
#include <cctype>

using namespace std;

int main() {
    int n;
    string s;

    // Input number of characters and the string
    cin >> n;
    cin.ignore(); // To ignore newline after the integer input
    getline(cin, s);

    if (n < 26) {
        // If the string length is less than 26, it can't be a pangram
        cout << "NO" << endl;
        return 0;
    }

    unordered_set<char> letters;

    // Add each letter in lowercase form to the set
    for (char c : s) {
        letters.insert(tolower(c));
    }

    // Check if all 26 letters are present
    if (letters.size() == 26) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
