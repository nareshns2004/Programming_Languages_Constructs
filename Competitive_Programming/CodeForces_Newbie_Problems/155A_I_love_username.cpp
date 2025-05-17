/*

Vasya adores sport programming. He can't write programs but he loves to watch the contests' progress. Vasya even has a favorite coder and Vasya pays special attention to him.

One day Vasya decided to collect the results of all contests where his favorite coder participated and track the progress of his coolness. For each contest where this coder participated, he wrote out a single non-negative number — the number of points his favorite coder earned in the contest. Vasya wrote out the points for the contest in the order, in which the contests run (naturally, no two contests ran simultaneously).

Vasya considers a coder's performance in a contest amazing in two situations: he can break either his best or his worst performance record. First, it is amazing if during the contest the coder earns strictly more points that he earned on each past contest. Second, it is amazing if during the contest the coder earns strictly less points that he earned on each past contest. A coder's first contest isn't considered amazing. Now he wants to count the number of amazing performances the coder had throughout his whole history of participating in contests. But the list of earned points turned out long and Vasya can't code... That's why he asks you to help him.

Input
The first line contains the single integer n (1 ≤ n ≤ 1000) — the number of contests where the coder participated.

The next line contains n space-separated non-negative integer numbers — they are the points which the coder has earned. The points are given in the chronological order. All points do not exceed 10000.

Output
Print the single number — the number of amazing performances the coder has had during his whole history of participating in the contests.

*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n; // Read the number of contests
    vector<int> points(n); // Vector to store points for each contest
    
    for (int i = 0; i < n; i++) {
        cin >> points[i]; // Read the points earned in each contest
    }

    int amazing_count = 0;
    int best = points[0], worst = points[0]; // Initialize best and worst performance with the first contest
    
    // Loop through the contests starting from the second one
    for (int i = 1; i < n; i++) {
        if (points[i] > best) {
            amazing_count++; // New best record
            best = points[i]; // Update the best score
        } else if (points[i] < worst) {
            amazing_count++; // New worst record
            worst = points[i]; // Update the worst score
        }
    }

    cout << amazing_count << endl; // Output the number of amazing performances
    return 0;
}
