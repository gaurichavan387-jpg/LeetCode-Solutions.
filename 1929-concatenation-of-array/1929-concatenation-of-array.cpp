class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
      

        int n = nums.size();

        vector<int> st = nums;
        vector<int> end= nums;

        vector<int> ans(2 * n);

        for(int i = 0; i < n; i++) {
            ans[i] = st[i];
            ans[i + n] = end[i];
        }

        return ans;
    
    }
};