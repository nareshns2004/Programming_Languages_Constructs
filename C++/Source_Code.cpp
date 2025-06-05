#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <map>

// Function to compute GCD
int calculate_gcd(int a, int b) {
    while (b) {
        a %= b;
        std::swap(a, b);
    }
    return a;
}

// Define a large value for infinity
const int INF = 1e9; // A value larger than any possible operations (N <= 5000)

int main() {
    // Optimize C++ standard streams for faster input/output.
    // This is a common competitive programming optimization.
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t; // Number of test cases
    std::cin >> t;
    while (t--) {
        int n; // Length of the array
        std::cin >> n;

        // Store frequencies of numbers in the input array.
        // max_val is limited to 5000, so a vector of size 5001 is sufficient.
        std::vector<int> freq(5001, 0); 
        int overall_gcd = 0; // To store the GCD of all elements

        // Read array elements, update frequencies, and calculate overall_gcd.
        for (int i = 0; i < n; ++i) {
            int x;
            std::cin >> x;
            freq[x]++;
            if (overall_gcd == 0) {
                overall_gcd = x;
            } else {
                overall_gcd = calculate_gcd(overall_gcd, x);
            }
        }

        // Handle the base case where N=1. No operations needed.
        if (n == 1) {
            std::cout << 0 << "\n";
            continue;
        }

        // dp[g] stores the minimum operations to make 'g' appear at least once in the array.
        std::vector<int> dp(5001, INF);

        // Initialize dp values based on initial frequencies.
        // If 'g' is already present in the array, 0 operations are needed to make it appear.
        for (int g = 1; g <= 5000; ++g) {
            if (freq[g] > 0) {
                dp[g] = 0;
            }
        }

        // Dynamic programming loop: Iterate 'g' from MAX_A down to 1.
        // This order ensures that when we calculate dp[g], dp[m] for m > g are already computed.
        for (int g = 5000; g >= 1; --g) {
            // If dp[g] is still INF, it means 'g' cannot be formed from larger multiples.
            // But it might be formed from its own multiples if they exist and dp[g] is still INF.
            // Example: [6, 10, 15], g=1. dp[1] starts as INF.
            // dp[2]=1, dp[3]=1.
            // dp[1] = min(dp[1], dp[2]+1) = min(INF, 1+1) = 2.
            // dp[1] = min(2, dp[3]+1) = min(2, 1+1) = 2.
            // This loop calculates the minimum operations to make `g` appear.

            // Iterate through multiples 'm' of 'g'.
            // If we can make 'm' appear (dp[m] is finite), we can potentially make 'g' appear
            // by performing one more GCD operation (e.g., gcd(m, some_other_multiple_of_g)).
            for (int m = 2 * g; m <= 5000; m += g) {
                if (dp[m] != INF) {
                    dp[g] = std::min(dp[g], dp[m] + 1);
                }
            }
        }

        // The total operations are:
        // (Minimum operations to get the overall_gcd into the array) + (N - 1 operations to convert remaining elements)
        std::cout << dp[overall_gcd] + (n - 1) << "\n";
    }

    return 0;
}