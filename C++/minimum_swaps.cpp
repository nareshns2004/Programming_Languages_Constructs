#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
public:
    // Calculate sum of digits for a number
    int getDigitSum(int num) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }

    int minimumSwaps(std::vector<int>& nums) {
        int n = nums.size();
        if (n <= 1) return 0;

        // Create pairs of (number, digit_sum)
        std::vector<std::pair<int, int>> numWithSum(n);
        for (int i = 0; i < n; i++) {
            numWithSum[i] = {nums[i], getDigitSum(nums[i])};
        }

        // Use counting sort for digit sums (max possible sum is 81 for 10^9)
        const int MAX_SUM = 81;
        std::vector<std::vector<int>> count(MAX_SUM + 1);
        
        // First pass: count occurrences
        for (int i = 0; i < n; i++) {
            count[numWithSum[i].second].push_back(numWithSum[i].first);
        }

        // Sort numbers within each digit sum bucket
        for (auto& bucket : count) {
            std::sort(bucket.begin(), bucket.end());
        }

        // Create sorted array
        std::vector<int> sortedNums;
        for (int sum = 0; sum <= MAX_SUM; sum++) {
            sortedNums.insert(sortedNums.end(), count[sum].begin(), count[sum].end());
        }

        // Create a map of number to its target position
        std::unordered_map<int, int> targetPos;
        for (int i = 0; i < n; i++) {
            targetPos[sortedNums[i]] = i;
        }

        // Calculate minimum swaps
        int swaps = 0;
        std::vector<bool> visited(n, false);

        for (int i = 0; i < n; i++) {
            if (visited[i] || targetPos[nums[i]] == i) {
                continue;
            }

            int cycle_size = 0;
            int j = i;
            while (!visited[j]) {
                visited[j] = true;
                j = targetPos[nums[j]];
                cycle_size++;
            }
            swaps += (cycle_size - 1);
        }

        return swaps;
    }
};

// Test cases
int main() {
    Solution solution;
    
    // Test case 1
    std::vector<int> nums1 = {37, 100};
    std::cout << "Test case 1: " << solution.minimumSwaps(nums1) << std::endl;  // Expected: 1
    
    // Test case 2
    std::vector<int> nums2 = {22, 14, 33, 7};
    std::cout << "Test case 2: " << solution.minimumSwaps(nums2) << std::endl;  // Expected: 0
    
    // Test case 3
    std::vector<int> nums3 = {18, 43, 34, 16};
    std::cout << "Test case 3: " << solution.minimumSwaps(nums3) << std::endl;  // Expected: 2
    
    return 0;
} 