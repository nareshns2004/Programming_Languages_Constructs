#include <iostream>
using namespace std;

void solve(){
        int n;
        cin>>n;

    int ones = 0, twos = 0, total_weight = 0;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 1) ones++;
        else twos++;
        total_weight += x;
    }
    
    if (total_weight % 2 != 0) {
        cout << "NO\n";
        return;
    }
    
    int half_weight = total_weight / 2;
    
    if (half_weight % 2 == 0 || (half_weight % 2 == 1 && ones > 0)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

}

int main(){

    int t;
    cin>>t;

    while(t--){
        solve();
    }

    return 0;

}