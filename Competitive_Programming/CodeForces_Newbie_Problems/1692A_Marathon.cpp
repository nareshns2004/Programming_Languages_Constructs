#include <iostream>

int countParticipantsInFront(int a, int b, int c, int d) {
    int count = 0;
    if (b > a) count++;
    if (c > a) count++;
    if (d > a) count++;
    return count;
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int a, b, c, d;
        std::cin >> a >> b >> c >> d;

        int participantsInFront = countParticipantsInFront(a, b, c, d);
        std::cout << participantsInFront << std::endl;
    }

    return 0;
}