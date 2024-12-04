#include <iostream>
#include <set>
#include <string>

int main() {
    std::string input;
    std::getline(std::cin, input);

    // Create a set to store distinct letters
    std::set<char> distinctLetters;

    // Iterate through the input string
    for (char c : input) {
        // Add only lowercase letters to the set
        if (c >= 'a' && c <= 'z') {
            distinctLetters.insert(c);
        }
    }

    // Print the size of the set
    std::cout << distinctLetters.size() << std::endl;

    return 0;
}
