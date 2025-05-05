#include <iostream>
#include <string>
#include <vector>

bool isSquareString(const std::string& s) {
    int n = s.length();
    
    // A square string must have even length
    if (n % 2 != 0) {
        return false;
    }
    
    // Check if the first half is equal to the second half
    int halfLength = n / 2;
    for (int i = 0; i < halfLength; i++) {
        if (s[i] != s[i + halfLength]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int t;
    std::cin >> t;
    
    std::vector<std::string> results;
    
    for (int i = 0; i < t; i++) {
        std::string s;
        std::cin >> s;
        
        if (isSquareString(s)) {
            results.push_back("YES");
        } else {
            results.push_back("NO");
        }
    }
    
    // Output results
    for (const auto& result : results) {
        std::cout << result << std::endl;
    }
    
    return 0;
}