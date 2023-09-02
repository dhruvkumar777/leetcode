class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            
            // Check if the mid element is greater than the last element
            if (nums[mid] > nums[right]) {
                left = mid + 1;  // Move left to mid + 1
            } else {
                right = mid;  // Move right to mid
            }
        }
        
        // The minimum element will be at 'left' index
        return nums[left];
    }
};
