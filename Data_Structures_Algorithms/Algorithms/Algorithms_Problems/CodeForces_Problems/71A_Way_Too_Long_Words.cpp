#include <iostream>
#include <string>

int main() {
    int n;  // Number of words
    std::cin >> n;
    
    for (int i = 0; i < n; ++i) {
        std::string word;
        std::cin >> word;
        
        if (word.length() > 10) {
            // Abbreviate the word
            std::cout << word[0] << word.length() - 2 << word.back() << std::endl;
        } else {
            // Print the word as is
            std::cout << word << std::endl;
        }
    }
    
    return 0;
}
