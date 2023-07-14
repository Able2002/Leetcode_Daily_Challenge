class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
       int ans=0;
       unordered_map<int,int> dp;
        for(int i=0;i<arr.size();i++){
            int temp=0;
            if(dp.count(arr[i]-difference)) temp=dp[arr[i]-difference];
            dp[arr[i]]=1+temp;
            ans=max(ans,dp[arr[i]]);
            }
       return ans;
    }
};
