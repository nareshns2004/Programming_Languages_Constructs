#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n, a, b, c;
        cin >> n >> a >> b >> c;

        int total = a + b + c; 
        int cnt = (n / total) * 3; 

        int remainder = n % total; 
        if (remainder > 0) {
            if (remainder <= a) {
                cnt++; 
            } else if (remainder <= a + b) {
                cnt += 2; 
            } else {
                cnt += 3; 
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
