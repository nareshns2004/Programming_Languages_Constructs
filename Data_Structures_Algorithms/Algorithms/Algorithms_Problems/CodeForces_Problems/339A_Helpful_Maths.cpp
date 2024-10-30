#include <iostream>
#include <algorithm>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    // Extract the numbers (1, 2, 3) and ignore the '+' signs
    std::string numbers;
    for (char c : s) {
        if (c != '+') {
            numbers += c;
        }
    }

    // Sort the extracted numbers in non-decreasing order
    std::sort(numbers.begin(), numbers.end());

    // Output the sorted numbers with '+' between them
    for (std::size_t i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i];
        if (i < numbers.size() - 1) {
            std::cout << "+";
        }
    }
    std::cout << std::endl;

    return 0;
}
