#include <iostream>
using namespace std;

long long calculateLuckyValue(long long n, long long k) {
    long long luckyValue = 0;
    long long l = 1, r = n;

    while (r - l + 1 >= k) {
        long long m = (l + r) / 2;
        if ((r - l + 1) % 2 == 1) {
            luckyValue += m;
            if (l != r) {
                long long leftSegmentLength = m - l;
                long long rightSegmentLength = r - m;

                if (leftSegmentLength >= k) {
                    r = m - 1;
                } else if (rightSegmentLength >= k) {
                    l = m + 1;
                } else {
                    break; // Neither segment is large enough
                }
            } else {
                break; // Single element, terminate
            }
        } else {
            r = m; // Even segment, split equally
        }
    }

    return luckyValue;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        cout << calculateLuckyValue(n, k) << '\n';
    }

    return 0;
}
