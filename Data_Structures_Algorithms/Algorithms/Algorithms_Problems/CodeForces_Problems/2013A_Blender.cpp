#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;  // Number of test cases
    cin >> t;
    
    while (t--) {
        long long n, x, y;  // n = number of fruits, x = blending capacity, y = insertion rate
        cin >> n >> x >> y;
        
        if (n == 0) {
            cout << 0 << endl;  // No fruits, no time needed
            continue;
        }

        // In each second, we can insert 'y' fruits and blend min(x, c) fruits
        long long seconds = 0;
        long long remainingFruits = n;

        // In each second, we insert y fruits, but only min(x, c) can be blended
        while (remainingFruits > 0) {
            long long insertedFruits = min(remainingFruits, y);  // Fruits we can insert in this second
            remainingFruits -= min(insertedFruits, x);  // Fruits blended (min of inserted or blender's capacity)
            seconds++;
        }

        cout << seconds << endl;
    }
    
    return 0;
}
