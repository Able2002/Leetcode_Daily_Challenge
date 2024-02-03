class Solution {
public:

    
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> dp(n+1, 0);
        for(int i=n-1;i>=0;i--){
            
            int maxParti = INT_MIN;
            int ans = INT_MIN;
            int len = 0;
            
            for(int j=i;j<min(n, i+k);j++){
                len++;
                maxParti = max(maxParti, arr[j]);
                int partition = len*maxParti + dp[j+1];
                ans = max(ans, partition);
            }
            dp[i] = ans;
        }
        return dp[0];
    }
};
