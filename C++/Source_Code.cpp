#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
// #pragma GCC optimize("Ofast")
// #pragma GCC optimize("unroll-loops")

using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)
#define ia(a, n) \
    ll a[n];     \
    f(i, n) cin >> a[i]
#define iv(v, n)     \
    vector<ll> v(n); \
    f(i, n) cin >> v[i]
#define MOD (1000000007)
#define INF 1000000000000000000LL // Infinity for ll
#define mp make_pair
#define nline '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

template <typename T>
using os = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

template <typename T>
using oms = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

// read question properly
// don't forget newlines!!!!!!
// take care about cin >> t;
// comment the optimization before debugging
// ALWAYS USE FIXED << SETPRECISION WHILE OUTPUTTING FLOATS

vector<ll> par,si;
vector<bool> cyc1, cyc2;

ll fi(ll a) {
    if(par[a] == a) return a;
    else return par[a] = fi(par[a]);
}

void join(ll a, ll b){
    a = fi(a);
    b = fi(b);
    if(a == b) {
        if(cyc1[a]) {
            cyc2[a] = true;
        }
        cyc1[a] = true;
        return;
    }
    if(si[a] < si[b]) swap(a,b);
    par[b] = a;
    si[a] += si[b];
    bool newc1 = (cyc1[a] || cyc1[b]);
    bool newc2 = (cyc2[a] || cyc2[b] || (cyc1[a] && cyc1[b]));
    cyc1[a] = newc1;
    cyc2[a] = newc2;
}

ll power(ll a, ll b, ll m) {
    ll ans = 1;
    while(b) {
        if(b & 1) ans = ans * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return ans;
}

void solve()
{
    ll n,m,k;
    cin >> n >> m >> k;

    par.assign(n*m,0);
    f(i,n*m){
        par[i] = i;
    }
    si.assign(n*m,1);
    cyc2.assign(n*m,false);
    cyc1.assign(n*m,false);

    vector<vector<bool>> vis(n,vector<bool>(m));

    vector<pair<ll,ll>> v;
    f(i,k+1) {
        ll a,b;
        cin >> a >> b;
        a--,b--;
        v.push_back(mp(a,b));
    }

    auto dist = [&](pair<ll,ll>& a,pair<ll,ll>& b) {
        return abs(a.first - b.first) + abs(a.second - b.second);
    };

    auto sin = [&](pair<ll,ll> p) {
        return p.first * m + p.second;
    };

    ll cnt = 0;

    f(i,k){
        if(dist(v[i],v[i+1]) != 2) {
            cout << 0 << nline;
            return;
        }

    }

    f(i,k){
        auto& a = v[i];
        auto& b = v[i+1];
        pair<ll,ll> c,d;
        if(a.first != b.first && a.second != b.second){
            c = mp(a.first,b.second);
            d = mp(b.first,a.second);
        }
        else{
            c = mp((a.first + b.first) >> 1, (a.second + b.second) >> 1);
            d = c;
        }
           
        join(sin(c), sin(d));
        cnt += (c==d);
    }

    ll ans = 1;

    f(i,n*m) {
        if(par[i] != i) continue;
        if(cyc2[i]) {
            cout << 0 << nline;
            return;
        }
        else if(cyc1[i]) {
            ans = ans * 2 % MOD;
        }
        else{
            ans = ans * si[i] % MOD;
        }
    }

    cout << (ans * power(2,cnt*(MOD-2),MOD)) % MOD << nline;
}

int main()
{
#ifdef PRADY
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    clock_t T = clock();
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

#ifdef PRADY
    cout << "\nTime taken: " << ((float)(clock() - T)) / CLOCKS_PER_SEC << " seconds";
#endif
    return 0;
}