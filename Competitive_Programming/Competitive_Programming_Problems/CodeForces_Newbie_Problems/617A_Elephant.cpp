#include <iostream>
 
int minSteps(int x) {
    // Calculate the minimum number of steps
    return (x + 4) / 5;
}
 
int main() {
    int x;
    std::cin >> x;  // Read the coordinate of the friend's house
    std::cout << minSteps(x) << std::endl;  // Print the minimum number of steps
    return 0;
}
