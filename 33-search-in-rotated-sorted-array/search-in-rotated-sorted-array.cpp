class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n =nums.size();
        int pivot=0;
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                continue;
            }else{
                pivot=i;
                break;
            }
        }
        int low,high;
        if(nums[pivot]<=target&&target<=nums[n-1]){
            low=pivot;
            high=n-1;
        }
        else{
            low=0;
            high=pivot-1;
        }
        
        cout<<pivot<<" "<<low<<high;
        
        
        
        
        
        
        
        

        while(low<=high){
            int mid =(low+high)/2;
            if (nums[mid]==target){
                return mid;}
            else if(nums[mid]>target) {
                high=mid-1;
                
            
            }
            else{
                low=mid+1;
            }
            }
        
        return -1;        
    }
};