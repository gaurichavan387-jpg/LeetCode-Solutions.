class Solution {
public:
    int findMin(vector<int>& nums) {
        int target ;
        int low =0;
        int high = nums.size()-1;
        int n = nums.size();

        while(low<=high){
            int mid = low+(high-low)/2;

            if(nums[low]<=nums[mid]){
                if(target>=nums[low] && target<=nums[mid]){
                    high = mid-1;
                }else{
                    low = mid+1;
                }
            }
            else{
                if(target>nums[mid] && target<nums[high]){
                    low = mid+1;
                }else{
                    high = mid-1;
                }
            }
        }

        int min = nums[0];
        for(int i=0;i<n;i++){
            if(nums[i]<min){
                min = nums[i];
            }
        }
        return min ;
        
    }
};