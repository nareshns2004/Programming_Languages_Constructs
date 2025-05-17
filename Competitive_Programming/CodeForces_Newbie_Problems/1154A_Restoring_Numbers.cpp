#include <iostream>
#include <algorithm>

int main() {
    int numbers[4];
    for (int i = 0; i < 4; i++) {
        std::cin >> numbers[i];
    }

    // Sort the numbers in ascending order
    std::sort(numbers, numbers + 4);

    // The smallest three numbers are the pairwise sums
    int a_plus_b = numbers[0];
    int a_plus_c = numbers[1];
    int b_plus_c = numbers[2];

    // The largest number is the sum of all three numbers
    int a_plus_b_plus_c = numbers[3];

    // Calculate the values of a, b, and c
    int a = a_plus_b_plus_c - b_plus_c;
    int b = a_plus_b_plus_c - a_plus_c;
    int c = a_plus_b_plus_c - a_plus_b;

    // Print the values of a, b, and c
    std::cout << a << " " << b << " " << c << std::endl;

    return 0;
}