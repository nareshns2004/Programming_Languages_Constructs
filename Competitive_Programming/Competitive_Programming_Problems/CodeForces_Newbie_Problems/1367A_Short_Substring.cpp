#include <iostream>
#include <string>

using namespace std;

string solve(const string& b) {
    /* 
    If a = "abac", then:
    - Length-2 substrings: "ab", "ba", "ac"
    - b = "abbaac"
    
    We observe:
    1. First two characters of b ("ab") = first two characters of a
    2. After that, every odd-indexed character in b is a new character to add to a
       (because even-indexed characters after position 1 are repeats from the overlap)
    */
    
    if (b.length() <= 2) {
        return b;  // If b is already of length 2 or less
    }
    
    string a = b.substr(0, 2);  // Start with first two characters
    
    for (int i = 3; i < b.length(); i += 2) {
        a.push_back(b[i]);  // Add every odd-indexed character starting from the third
    }
    
    return a;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string b;
        cin >> b;
        
        string a = solve(b);
        cout << a << endl;
    }
    
    return 0;
}