#include <iostream>
#include <string>

using namespace std;

// Function to check if a number is a lucky number
bool isLucky(int count) {
    string s = to_string(count);
    for (char c : s) {
        if (c != '4' && c != '7') {
            return false;
        }
    }
    return true;
}

int main() {
    string n;
    cin >> n;

    int luckyDigitCount = 0;

    // Count the lucky digits in the number
    for (char c : n) {
        if (c == '4' || c == '7') {
            luckyDigitCount++;
        }
    }

    // Check if the count of lucky digits is a lucky number
    if (isLucky(luckyDigitCount)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
