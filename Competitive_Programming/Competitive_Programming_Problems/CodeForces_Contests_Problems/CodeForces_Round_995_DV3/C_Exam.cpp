#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(m);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }

    vector<int> q(k);
    for (int i = 0; i < k; i++) {
        cin >> q[i];
    }

    vector<int> result(m);
    for (int i = 0; i < m; i++) {
        result[i] = (find(q.begin(), q.end(), a[i]) != q.end()) ? 1 : 0;
    }

    for (int i = 0; i < m; i++) {
        cout << result[i];
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}