#include <iostream>
#include <string>

// Function to check if a ticket is lucky
bool isLuckyTicket(const std::string& ticket) {
    int sumFirstHalf = 0;
    int sumSecondHalf = 0;

    // Calculate the sum of the first three digits
    for (int i = 0; i < 3; ++i) {
        sumFirstHalf += ticket[i] - '0';
    }

    // Calculate the sum of the last three digits
    for (int i = 3; i < 6; ++i) {
        sumSecondHalf += ticket[i] - '0';
    }

    // Return true if the sums are equal, false otherwise
    return sumFirstHalf == sumSecondHalf;
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        std::string ticket;
        std::cin >> ticket;

        if (isLuckyTicket(ticket)) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }

    return 0;
}