#include <iostream>
#include <cmath>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int a, b;
        std::cin >> a >> b;

        int diff = std::abs(a - b);
        int result = diff / 10;

        if (diff % 10 != 0) {
            result++;
        }

        std::cout << result << std::endl;
    }

    return 0;
}