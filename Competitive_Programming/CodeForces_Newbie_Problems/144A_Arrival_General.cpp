#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    int max = 0; // Initialize to the smallest possible value
    int min = 0; // Initialize to the largest possible value
    int lg = 0;        // Index of the tallest soldier
    int sm = 0;        // Index of the shortest soldier

    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (arr[i] > max) {
            max = arr[i];
            lg = i;
        }

        if (arr[i] <= min) {
            min = arr[i];
            sm = i;
        }
    }

    // Calculate the swaps
    int swaps = lg + ((n - 1) - sm);
    if (lg > sm) { // Adjust for overlap
        swaps -= 1;
    }

    cout << swaps << endl;

    return 0;
}
