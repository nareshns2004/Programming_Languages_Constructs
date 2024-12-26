#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

// Function to find the next prime number after a given number
int nextPrime(int num) {
    int candidate = num + 1;
    while (!isPrime(candidate)) {
        ++candidate;
    }
    return candidate;
}

int main() {
    int n, m;
    cin >> n >> m;

    // Find the next prime after n
    int next = nextPrime(n);

    // Check if m is the next prime
    if (m == next) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
