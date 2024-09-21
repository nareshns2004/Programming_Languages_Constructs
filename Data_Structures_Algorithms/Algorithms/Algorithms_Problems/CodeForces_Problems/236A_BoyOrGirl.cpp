#include <iostream>
#include <set>
using namespace std;

int main() {
    string username;
    cin >> username;

    // Use a set to store distinct characters
    set<char> distinctChars;

    // Insert each character into the set
    for (char c : username) {
        distinctChars.insert(c);
    }

    // If the number of distinct characters is odd, it's a male; otherwise, female
    if (distinctChars.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
