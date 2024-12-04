#include <iostream>
#include <algorithm>
#include <string>

int main() {
    std::string str1, str2;
    std::cin >> str1 >> str2;

    // Convert both strings to lowercase
    std::transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    std::transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    // Compare the strings
    if (str1 < str2) {
        std::cout << "-1" << std::endl;
    } else if (str1 > str2) {
        std::cout << "1" << std::endl;
    } else {
        std::cout << "0" << std::endl;
    }

    return 0;
}
