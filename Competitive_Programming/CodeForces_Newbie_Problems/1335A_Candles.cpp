#include <iostream>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        long long n;
        std::cin >> n;

        if (n < 3) {
            std::cout << 0 << std::endl;
        } else {
            std::cout << (n - 1) / 2 << std::endl;
        }
    }

    return 0;
}