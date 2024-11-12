#include <iostream>
using namespace std;

bool hasDistinctDigits(int year) {
    int digits[10] = {0};
    while (year > 0) {
        int digit = year % 10;
        if (digits[digit] == 1) {
            return false;
        }
        digits[digit] = 1;
        year /= 10;
    }
    return true;
}

int main() {
    int year;
    cin >> year;
    year++;
    while (!hasDistinctDigits(year)) {
        year++;
    }
    cout << year << endl;
    return 0;
}