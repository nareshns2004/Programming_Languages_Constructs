#include <iostream>
#include <vector>
using namespace std;

class DSU {
public:
    vector<int> parent, size;

    // Constructor to initialize the DSU structure
    DSU(int n) {
        parent.resize(n);
        size.resize(n, 1);
        for (int i = 0; i < n; ++i)
            parent[i] = i;
    }

    // Find with path compression
    int find(int v) {
        if (v == parent[v])
            return v;
        return parent[v] = find(parent[v]);
    }

    // Union by size
    bool unite(int a, int b) {
        a = find(a);
        b = find(b);
        if (a != b) {
            if (size[a] < size[b])
                swap(a, b);
            parent[b] = a;
            size[a] += size[b];
            return true;
        }
        return false;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        DSU dsu(n + 1);  // DSU for points 1 to n
        int connectedComponents = n;  // Initially, all points are disconnected

        for (int i = 0; i < m; ++i) {
            int a, d, k;
            cin >> a >> d >> k;

            // Iterate over the sequence of points a, a+d, a+2d, ..., a+k*d
            for (int j = 0; j < k; ++j) {
                int u = a + j * d;
                int v = a + (j + 1) * d;
                if (dsu.unite(u, v)) {
                    // If two points are united, we reduce the number of components
                    --connectedComponents;
                }
            }
        }

        cout << connectedComponents << '\n';
    }

    return 0;
}
