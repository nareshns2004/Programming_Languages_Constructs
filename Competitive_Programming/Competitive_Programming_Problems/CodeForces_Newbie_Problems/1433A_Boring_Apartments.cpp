#include <iostream>

using namespace std;

int countKeyPresses(int x) {
    int digit = x % 10; // Extract the digit of the apartment number
    int length = 0;
    int temp = x;
    
    while (temp > 0) {
        length++;
        temp /= 10;
    }
    
    // Calculate the total key presses
    int result = (digit - 1) * 10 + (length * (length + 1)) / 2;
    return result;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int x;
        cin >> x;
        cout << countKeyPresses(x) << endl;
    }
    
    return 0;
}
