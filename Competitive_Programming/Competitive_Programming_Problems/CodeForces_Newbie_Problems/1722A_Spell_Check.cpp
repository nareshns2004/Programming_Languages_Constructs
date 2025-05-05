#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool isCorrectSpelling(const string& s) {
    // Check if length is correct (Timur has 5 letters)
    if (s.length() != 5) {
        return false;
    }
    
    // Count uppercase T and each lowercase letter
    unordered_map<char, int> count;
    for (char c : s) {
        count[c]++;
    }
    
    // Check for exactly one uppercase T
    if (count['T'] != 1) {
        return false;
    }
    
    // Check for exactly one of each required lowercase letter
    if (count['i'] != 1 || count['m'] != 1 || count['u'] != 1 || count['r'] != 1) {
        return false;
    }
    
    // Check no other characters exist
    return count.size() == 5;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        string s;
        cin >> s;
        
        if (isCorrectSpelling(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}