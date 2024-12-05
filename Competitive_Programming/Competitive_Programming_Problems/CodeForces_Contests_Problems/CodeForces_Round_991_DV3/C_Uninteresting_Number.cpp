#include <iostream>
#include <string>

using namespace std;

bool isDivisibleBy9(string n) {
    int sum = 0;
    for (char c : n) {
        int digit = c - '0';
        sum += digit;
    }
    return sum % 9 == 0;
}

bool canBeDivisibleBy9(string n) {
    for (char c : n) {
        int digit = c - '0';
        int squared = digit * digit;
        if (squared % 9 == 0 || (squared >= 10 && squared % 9 == digit)) {
            return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string n;
        cin >> n;

        if (isDivisibleBy9(n) || canBeDivisibleBy9(n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}