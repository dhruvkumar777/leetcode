class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size() - 1;

    int result = nums.size(); 
    
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] >= target) {
            result = mid;
            high = mid - 1; // Move to the left subarray for a lower bound
        }
        else {
            low = mid + 1;
        }
    }

    return result; 
    }
};