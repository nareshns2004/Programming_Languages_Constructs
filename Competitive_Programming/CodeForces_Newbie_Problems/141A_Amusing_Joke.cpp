#include <iostream>
#include <string>
#include <algorithm>

int main() {
    // Input: guest's name, host's name, and letters in a pile
    std::string guestName, hostName, pileLetters;
    std::cin >> guestName >> hostName >> pileLetters;

    // Combine guest's name and host's name
    std::string combinedNames = guestName + hostName;

    // Sort the combined names and pile of letters
    std::sort(combinedNames.begin(), combinedNames.end());
    std::sort(pileLetters.begin(), pileLetters.end());

    // Compare sorted strings to verify if they match
    if (combinedNames == pileLetters) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
