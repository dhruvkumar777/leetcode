class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = findFirstOccurrence(nums, target);
        int end = findLastOccurrence(nums, target);
        
        return {start, end};
    }
    
private:
    int findFirstOccurrence(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        int result = -1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (nums[mid] == target) {
                result = mid;
                right = mid - 1; // Continue searching on the left side
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        return result;
    }
    
    int findLastOccurrence(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        int result = -1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (nums[mid] == target) {
                result = mid;
                left = mid + 1; // Continue searching on the right side
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        return result;
    }
};
