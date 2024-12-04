#include <iostream>
using namespace std;

int count_solutions(int n, int m) {
    int count = 0;
    for (int a = 0; a * a <= n; ++a) {
        for (int b = 0; b * b <= m; ++b) {
            if (a * a + b == n && a + b * b == m) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int n, m;
    cin >> n >> m;

    // Output the result
    cout << count_solutions(n, m) << endl;

    return 0;
}
