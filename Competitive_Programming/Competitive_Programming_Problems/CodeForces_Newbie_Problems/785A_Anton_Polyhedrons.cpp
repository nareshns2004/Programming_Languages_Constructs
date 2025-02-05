#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    unordered_map<string, int> faces = {
        {"Tetrahedron", 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20}
    };
    
    int total_faces = 0;
    string polyhedron;
    
    for (int i = 0; i < n; ++i) {
        cin >> polyhedron;
        total_faces += faces[polyhedron];
    }
    
    cout << total_faces << endl;
    
    return 0;
}
