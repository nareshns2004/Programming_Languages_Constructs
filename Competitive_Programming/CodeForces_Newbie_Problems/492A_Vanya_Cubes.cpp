#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int height = 0;   // To store the height of the pyramid
    int usedCubes = 0; // To store the total cubes used so far
    int level = 1;     // The current level of the pyramid

    while (usedCubes + (level * (level + 1)) / 2 <= n) {
        usedCubes += (level * (level + 1)) / 2; // Add cubes required for this level
        height++;                              // Increment the height
        level++;                               // Move to the next level
    }

    cout << height << endl; // Output the maximum height
    return 0;
}
