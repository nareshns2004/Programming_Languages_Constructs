#include <iostream>
#include <string>

int main() {
    int n;
    std::string s;
    std::cin >> n >> s;

    int antonWins = 0, danikWins = 0;

    for (char game : s) {
        if (game == 'A') {
            antonWins++;
        } else if (game == 'D') {
            danikWins++;
        }
    }

    if (antonWins > danikWins) {
        std::cout << "Anton" << std::endl;
    } else if (danikWins > antonWins) {
        std::cout << "Danik" << std::endl;
    } else {
        std::cout << "Friendship" << std::endl;
    }

    return 0;
}
