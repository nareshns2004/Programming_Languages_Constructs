using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int len = nums.size();
        vector <int> arr(len);
        int left = 0;
        int right = len-1;
        
        for(int i=len-1;i>=0;i--)
        {
            if(nums[left]*nums[left]>=nums[right]*nums[right])
            {
                arr[i] = nums[left]*nums[left];
                left++;
            }
            else
            {
                arr[i] = nums[right]*nums[right];
                right--;
            }
        }
        
        return arr;
    }
};