class Solution {
public:
    
    int solve(vector<int>& nums, int ind, vector<int>&dp){
        if(ind < 0){
            return 0;
        }
        
        if(dp[ind]!=-1){
            return dp[ind];
        }
        
        return dp[ind]=max(nums[ind]+solve(nums, ind-2, dp), solve(nums, ind-1, dp));
    }
    
    int rob(vector<int>& nums) {
        int n = nums.size();
             vector<int> dp(n, -1);
        return solve(nums, n-1, dp);
    }
};
