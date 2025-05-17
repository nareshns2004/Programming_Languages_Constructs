#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;  // number of test cases

    while (t--) {
        int n;
        cin >> n;  // number of digits
        vector<int> a(n);

        for (int i = 0; i < n; ++i)
            cin >> a[i];

        long long max_product = 0;

        for (int i = 0; i < n; ++i) {
            vector<int> temp = a;
            temp[i] += 1;  // increase one digit by 1

            long long product = 1;
            for (int d : temp)
                product *= d;

            max_product = max(max_product, product);
        }

        cout << max_product << endl;
    }

    return 0;
}
