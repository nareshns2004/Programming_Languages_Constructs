#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> magnets(n);

    // Input magnet orientations
    for (int i = 0; i < n; i++) {
        cin >> magnets[i];
    }

    int groupCount = 1; // Start with one group for the first magnet

    // Loop through magnets starting from the second
    for (int i = 1; i < n; i++) {
        if (magnets[i] != magnets[i - 1]) {
            groupCount++; // A new group is formed if orientation differs from the previous one
        }
    }

    cout << groupCount << endl;
    return 0;
}
