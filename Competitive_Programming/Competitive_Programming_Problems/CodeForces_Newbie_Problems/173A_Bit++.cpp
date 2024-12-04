#include <iostream>
#include <string>
using namespace std;

int main() {
    int n; // Number of statements
    cin >> n;
    
    int x = 0; // Initial value of x is 0
    
    for (int i = 0; i < n; ++i) {
        string statement;
        cin >> statement;
        
        // Check if the statement contains "++" or "--"
        if (statement.find("++") != string::npos) {
            ++x; // Increment x if "++" is found
        } else if (statement.find("--") != string::npos) {
            --x; // Decrement x if "--" is found
        }
    }
    
    cout << x << endl; // Output the final value of x
    return 0;
}
