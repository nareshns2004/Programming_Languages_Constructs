#include <iostream>
using namespace std;

int main() {
    int n; // Number of events
    cin >> n;
    
    int untreatedCrimes = 0; // Count of untreated crimes
    int availableOfficers = 0; // Count of available police officers
    
    for (int i = 0; i < n; ++i) {
        int event;
        cin >> event;
        
        if (event == -1) { // A crime occurred
            if (availableOfficers > 0) {
                --availableOfficers; // Assign an officer to the crime
            } else {
                ++untreatedCrimes; // No officer available to handle the crime
            }
        } else {
            availableOfficers += event; // Recruited new officers
        }
    }
    
    cout << untreatedCrimes << endl; // Output the number of untreated crimes
    
    return 0;
}
