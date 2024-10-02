#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t; // number of test cases
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> a(n); // array to hold gold values of each person
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        int robinGold = 0; // Robin's gold starts at 0
        int peopleHelped = 0; // counter for people who receive gold from Robin
        
        for (int i = 0; i < n; ++i) {
            if (a[i] >= k) {
                // Robin takes all gold from this person
                robinGold += a[i];
            } else if (a[i] == 0 && robinGold > 0) {
                // Robin gives 1 gold if this person has 0 gold and Robin has any
                robinGold--;
                peopleHelped++;
            }
        }
        
        // Output the number of people Robin helped in this test case
        cout << peopleHelped << endl;
    }

    return 0;
}
