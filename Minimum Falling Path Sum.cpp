class Solution {
public:
  
    
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        
        vector<vector<int>> dp(m, vector<int>(n, 0));
        
        for(int i=0;i<n;i++){
            dp[0][i] = matrix[0][i];
        }
 
        for(int i=1;i<m;i++){
            for(int j=0;j<n;j++){
                int ld = 1e9;
                if(j-1>=0){
                    ld = dp[i-1][j-1];
                }
                int pr = dp[i-1][j];
                int rd = 1e9;
                if(j+1<n){
                    rd = dp[i-1][j+1];
                }
                dp[i][j] = matrix[i][j] + min(ld, min(rd, pr));
            }
        }
        return *min_element(dp[m-1].begin(), dp[m-1].end());
    }
};
