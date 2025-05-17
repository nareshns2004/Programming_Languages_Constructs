#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int t; // number of test cases
    cin >> t;
    
    while (t--) {
        int n; // number of points
        cin >> n;
        
        vector<pair<int, int>> points(n);
        unordered_map<int, int> y0_points; // store x coordinates of points on y = 0
        unordered_map<int, int> y1_points; // store x coordinates of points on y = 1
        
        for (int i = 0; i < n; ++i) {
            int x, y;
            cin >> x >> y;
            points[i] = {x, y};
            
            if (y == 0) {
                y0_points[x]++;
            } else if (y == 1) {
                y1_points[x]++;
            }
        }
        
        long long count = 0;
        
        // For each x, we try to form a triangle
        for (auto &p : y0_points) {
            int x = p.first;
            // If this x exists in both y = 0 and y = 1, we can form a vertical side
            if (y1_points.find(x) != y1_points.end()) {
                count += (long long)p.second * y1_points[x];
            }
        }

        cout << count << endl;
    }

    return 0;
}
