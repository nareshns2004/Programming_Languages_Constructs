#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n; // Read the number of friends
    
    vector<int> p(n + 1); // Array to store who gave a gift to whom (1-based indexing)
    vector<int> result(n + 1); // Array to store the answer
    
    // Input the data: p[i] is the friend to whom friend i gave a gift
    for (int i = 1; i <= n; ++i) {
        cin >> p[i];
    }
    
    // Compute the reverse mapping
    for (int i = 1; i <= n; ++i) {
        result[p[i]] = i; // Friend `i` gave a gift to friend `p[i]`
    }
    
    // Print the result
    for (int i = 1; i <= n; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
