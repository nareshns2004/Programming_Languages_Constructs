#include <iostream>
#include <vector>

class Solution {
public:
    int smallestEqual(const std::vector<int>& nums) {
        if (nums.empty()) {
            return -1;
        }

        for (size_t i = 0; i < nums.size(); ++i) {
            // Handle negative numbers by taking absolute value
            int num = std::abs(nums[i]);
            
            // Calculate sum of digits using a more efficient method
            int sum = 0;
            do {
                sum += num % 10;
                num /= 10;
            } while (num > 0);
            
            if (sum == static_cast<int>(i)) {
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
    
    // Additional test cases
    std::vector<int> nums4 = {0, 1, 2};  // Test with 0
    std::cout << "Test case 4: " << solution.smallestEqual(nums4) << std::endl;  // Expected: 0
    
    std::vector<int> nums5 = {-1, -2, -3};  // Test with negative numbers
    std::cout << "Test case 5: " << solution.smallestEqual(nums5) << std::endl;  // Expected: 0
    
    return 0;
} 