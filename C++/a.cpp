#include <iostream>
#include <vector>

class Solution {
public:
    int smallestEqual(std::vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            int sum = 0;
            
            // Calculate sum of digits
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            
            // If sum equals index, return it
            if (sum == i) {
                return i;
            }
        }
        return -1;
    }
};

// Test cases
int main() {
    Solution solution;
    
    // Test case 1
    std::vector<int> nums1 = {1, 3, 2};
    std::cout << "Test case 1: " << solution.smallestEqual(nums1) << std::endl;  // Expected: 2
    
    // Test case 2
    std::vector<int> nums2 = {1, 10, 11};
    std::cout << "Test case 2: " << solution.smallestEqual(nums2) << std::endl;  // Expected: 1
    
    // Test case 3
    std::vector<int> nums3 = {1, 2, 3};
    std::cout << "Test case 3: " << solution.smallestEqual(nums3) << std::endl;  // Expected: -1
    
    return 0;
}