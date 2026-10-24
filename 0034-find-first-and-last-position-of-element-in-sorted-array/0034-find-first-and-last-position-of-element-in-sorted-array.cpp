class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
  
    int n = nums.size();
    int st =-1;
    int ed =-1;
    int low =0;
    int high = n-1;

    while(low<=high){
        int mid = low+(high-low)/2;

        if(nums[mid]==target){
            st = mid;
            high = mid-1;
        }else if(nums[mid]<target){
            low = mid+1;
        }else{
            high = mid-1;
        }   
    }
    
     low =0;
     high = n-1;
    while(low<=high){
        int mid = low+(high-low)/2;

        if(nums[mid]==target){
            ed = mid;
            low = mid+1;
        }else if(nums[mid]<target){
            low = mid+1;
        }else{
            high = mid-1;
        }   
    }

    return { st , ed} ;
    
    }
};