#include <iostream>
#include <string>

int main() {
    int n;
    std::string s;
    
    std::cin >> n;
    std::cin >> s;
    
    int count = 0;
    
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            count++;
        }
    }
    
    std::cout << count << std::endl;
    
    return 0;
}
