#include <iostream>
#include <vector>

class Solution {
public:
    bool canMakeEqual(std::vector<int>& nums, int k) {
        int n = nums.size();
        if (n <= 1) return true;
        
        // Count the number of adjacent pairs that need to be flipped
        int flipsNeeded = 0;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] != nums[i + 1]) {
                flipsNeeded++;
            }
        }
        
        // If we need more flips than allowed operations, return false
        if (flipsNeeded > k) {
            return false;
        }
        
        // If we have enough operations, we can always make the array equal
        // because each flip operation affects two adjacent elements
        return true;
    }
};

// Test cases
int main() {
    Solution solution;
    
    // Test case 1
    std::vector<int> nums1 = {1, -1, 1, -1, 1};
    std::cout << "Test case 1: " << (solution.canMakeEqual(nums1, 3) ? "true" : "false") << std::endl;  // Expected: true
    
    // Test case 2
    std::vector<int> nums2 = {1, 1, 1, 1, 1};
    std::cout << "Test case 2: " << (solution.canMakeEqual(nums2, 2) ? "true" : "false") << std::endl;  // Expected: true
    
    // Test case 3
    std::vector<int> nums3 = {1, -1, 1, -1, 1};
    std::cout << "Test case 3: " << (solution.canMakeEqual(nums3, 1) ? "true" : "false") << std::endl;  // Expected: false
    
    return 0;
} 