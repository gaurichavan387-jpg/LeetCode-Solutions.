class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int> ans;

        for(int i=0 ;i <m ;i++){
        ans.push_back(nums1[i]);
        }

        for(int j =0;j<n ;j++){
        ans.push_back(nums2[j]);
        }
        sort(ans.begin() , ans.end());

       
        int p = ans.size();
        if (p % 2 == 1) {
            return ans[p / 2];
        } 
        else {
            return ((double)ans[p / 2 - 1] + ans[p / 2]) / 2.0;
        }
    }
};