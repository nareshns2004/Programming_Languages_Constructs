#include <bits/stdc++.h>
using namespace std;
 
struct Node {
  long long val;
  Node() : val(0) {}
  Node(long long v) : val(v) {}
  friend Node merge(Node l, Node r) { return Node(l.val + r.val); }
  void update(long long v) { val = v; }
};
 
struct SegmentTree {
  int n;
  vector<Node> seg;
  SegmentTree(int _n) : n(_n), seg(2 * _n) {}
  template <typename Type>
  SegmentTree(vector<Type> a) {
    n = int(a.size());
    seg.resize(2 * n);
    for (int i = 0; i < n; i++) seg[i + n] = Node(a[i]);
    for (int i = n - 1; i > 0; i--)
      seg[i] = merge(seg[i << 1], seg[i << 1 | 1]);
  }
  void update(int i, long long v) {
    for (seg[i += n].update(v); i >>= 1;)
      seg[i] = merge(seg[i << 1], seg[i << 1 | 1]);
  }
  Node query(int l, int r) {
    if (l > r) return Node();
    Node resl, resr;
    for (l += n, r += n + 1; l < r; l >>= 1, r >>= 1) {
      if (l & 1) resl = merge(resl, seg[l++]);
      if (r & 1) resr = merge(seg[--r], resr);
    }
    return merge(resl, resr);
  }
};
 
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
 
  auto solve = [&]() {
    int n;
    cin >> n;
 
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
 
    vector<int> odd, even;
    for (int i = 0; i < n; i++) {
      if (i & 1)
        odd.push_back(a[i]);
      else
        even.push_back(a[i]);
    }
 
    auto findParity = [&](vector<int> &v) {
      int m = v.size();
      SegmentTree sg(n + 1);
      int res = 0;
      for (int i = 0; i < m; i++) {
        sg.update(v[i], 1);
        res += sg.query(v[i] + 1, n).val;
      }
      return res & 1;
    };
 
    int oddParity = findParity(odd);
    int evenParity = findParity(even);
 
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());
 
    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
      if (i & 1)
        ans[i] = odd[i / 2];
      else
        ans[i] = even[i / 2];
    }
 
    if (oddParity != evenParity) swap(ans[n - 1], ans[n - 3]);
    for (int i = 0; i < n; i++) cout << ans[i] << " ";
    cout << "\n";
  };
 
  int t = 1;
  cin >> t;
 
  for (int tc = 1; tc <= t; tc++) {
    solve();
  }
 
  return 0;
}