#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;

    // The sum of the numbers of all brothers (1 + 2 + 3) is 6
    // So, the number of the brother who was late can be found by subtracting a and b from 6
    int lateBrother = 6 - a - b;

    std::cout << lateBrother << std::endl;

    return 0;
}
