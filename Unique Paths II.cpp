class Solution {
public:
    
    int solve(vector<vector<int>>&obstacleGrid, int i, int j, vector<vector<int>>& dp){
        if(i<0 || j<0){
            return 0;
        }
        if(i==0 && j==0){
            return 1;
        }
        if(obstacleGrid[i][j]==1){
            return 0;
        }
        
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        
        int up = solve(obstacleGrid, i-1, j, dp);
        int left = solve(obstacleGrid, i, j-1, dp);
        return dp[i][j] = up+left;
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        int i=m-1;
        int j=n-1;
        if(obstacleGrid[0][0]==1 || obstacleGrid[m-1][n-1]==1){
            return 0;
        }
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return solve(obstacleGrid, i, j, dp);
    }
};
