#include <iostream>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int k;
        std::cin >> k;

        int count = 0;
        int num = 1;

        while (count < k) {
            if (num % 3 != 0 && num % 10 != 3) {
                count++;
            }
            num++;
        }

        std::cout << num - 1 << std::endl;
    }

    return 0;
}