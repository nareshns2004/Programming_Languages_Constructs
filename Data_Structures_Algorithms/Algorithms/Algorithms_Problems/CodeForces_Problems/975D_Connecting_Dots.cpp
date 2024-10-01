#include <iostream>
#include <vector>
using namespace std;

// Union-Find (Disjoint Set Union) with path compression and union by rank
class DSU {
public:
    vector<int> parent, rank;
    int components;

    DSU(int n) : parent(n+1), rank(n+1, 0), components(n) {
        for (int i = 1; i <= n; ++i) {
            parent[i] = i;
        }
    }

    // Find function with path compression
    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }

    // Union function with union by rank
    void unite(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);

        if (rootX != rootY) {
            if (rank[rootX] < rank[rootY]) {
                swap(rootX, rootY);
            }
            parent[rootY] = rootX;
            if (rank[rootX] == rank[rootY]) {
                rank[rootX]++;
            }
            components--; // One less component after union
        }
    }

    // Get the current number of components
    int getComponents() {
        return components;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n, m;
        cin >> n >> m; // n: number of points, m: number of operations

        DSU dsu(n);

        // Processing each operation
        for (int i = 0; i < m; ++i) {
            int a, d, k;
            cin >> a >> d >> k;

            // Connect points a, a + d, a + 2*d, ..., a + k*d
            for (int j = 0; j < k; ++j) {
                int p1 = a + j * d;
                int p2 = a + (j + 1) * d;
                if (p2 <= n) {
                    dsu.unite(p1, p2);
                }
            }
        }

        // Output the number of connected components
        cout << dsu.getComponents() << "\n";
    }

    return 0;
}
