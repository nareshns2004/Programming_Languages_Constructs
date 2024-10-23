#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;  // Input the two brothers who arrived on time
    
    // The sum of all three brothers' numbers is 6 (1 + 2 + 3)
    // The late brother's number is simply 6 - (a + b)
    int lateBrother = 6 - (a + b);
    
    cout << lateBrother << endl;  // Output the number of the late brother
    
    return 0;
}
