#include <iostream>
#include <algorithm>

int main() {
    int n, k, l, c, d, p, nl, np;

    // Read input
    std::cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    // Calculate total amount of drink, lime slices, and salt
    int totalDrink = k * l;
    int totalLimeSlices = c * d;
    int totalSalt = p;

    // Calculate maximum number of toasts
    int maxToasts = std::min({totalDrink / nl, totalLimeSlices, totalSalt / np});

    // Calculate number of toasts per friend
    int toastsPerFriend = maxToasts / n;

    // Print result
    std::cout << toastsPerFriend << std::endl;

    return 0;
}