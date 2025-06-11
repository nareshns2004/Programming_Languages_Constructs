#include <bits/stdc++.h>

#define loop(i, l, r) for(int i = (l); i < (r); ++i)
#define pool(i, l, r) for(int i = (l); i > (r); --i)
#define debug(x) cerr << #x << ": " << x << endl;
using namespace std;
int t;
int n;
string s;
const int MAXN = 200005;
int a[MAXN];
int msum[MAXN];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>t;
    loop(i,0,t){
        cin>>n>>s;
        int total = 0;
        loop(i,0,s.length()){
            if(s[i]=='0'){
                a[i] = -1;
            }else{
                a[i] = 1;
                total++;
            }
        }
        msum[0] = max(0,a[0]);
        int m = msum[0];
        loop(i,1,s.length()){
            msum[i] = max(msum[i-1]+a[i],a[i]);
            m = max(m,msum[i]);
        }
        cout<<total-m<<endl;
    }
    
    return 0;
}
