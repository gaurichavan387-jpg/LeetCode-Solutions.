class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum =nums[0]; int sum =0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            sum = sum+nums[i];
            maxsum = max(sum , maxsum);
            if(sum<=0){
                sum=0;
            }
        }
        return maxsum;
        
    }
};