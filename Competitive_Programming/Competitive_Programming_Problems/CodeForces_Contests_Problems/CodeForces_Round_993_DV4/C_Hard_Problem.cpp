#include <iostream>
#include <algorithm>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        long long m, a, b, c;
        cin >> m >> a >> b >> c;

        
        long long row1_seated = min(m, a);  
        long long row2_seated = min(m, b);  

        long long remaining_row1 = m - row1_seated;
        long long remaining_row2 = m - row2_seated;

        long long no_preference_seated = min(c, remaining_row1 + remaining_row2);

        long long total_seated = row1_seated + row2_seated + no_preference_seated;

        cout << total_seated << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
