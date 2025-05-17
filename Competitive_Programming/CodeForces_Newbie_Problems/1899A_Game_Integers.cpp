#include <iostream>

using namespace std;

string solveGame(int n) {
    // Key insight: We need to check if n is divisible by 3 AFTER Vanya's move
    
    // First, let's analyze based on the remainder when n is divided by 3
    
    if (n % 3 == 0) {
        // If n is already divisible by 3, Vanya needs to make another move
        // Vanya will play +1 or -1, making the number not divisible by 3
        // Vova will keep the number not divisible by 3
        // Since we have 10 moves and Vanya can't force a winning position,
        // Vova wins
        return "Second";
    } else if (n % 3 == 1) {
        // If n % 3 == 1, Vanya can add +2 to make it divisible by 3
        // Vanya moves +1, Vova moves (either +1 or -1), Vanya moves opposite to Vova
        // This ensures n becomes divisible by 3 after Vanya's second move
        return "First";
    } else { // n % 3 == 2
        // If n % 3 == 2, Vanya can add +1 to make it divisible by 3
        // Similar strategy: Vanya moves +1, Vova moves (either +1 or -1), 
        // Vanya moves opposite to Vova
        return "First";
    }
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        cout << solveGame(n) << endl;
    }
    
    return 0;
}