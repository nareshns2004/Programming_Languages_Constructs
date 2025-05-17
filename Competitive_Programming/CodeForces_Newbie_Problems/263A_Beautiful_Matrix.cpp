#include <iostream>
#include <cmath>

int main() {
    int matrix[5][5];
    int x, y; // Position of the '1' in the matrix

    // Read the matrix and find the position of '1'
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            std::cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                x = i;
                y = j;
            }
        }
    }

    // Calculate the Manhattan distance to the center (2, 2) in 0-based indexing
    int moves = std::abs(x - 2) + std::abs(y - 2);

    // Output the result
    std::cout << moves << std::endl;

    return 0;
}
