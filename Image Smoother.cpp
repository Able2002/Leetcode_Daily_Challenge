class Solution {
public:


    int dr[8]={-1, -1, -1, 0, 0, 1, 1, 1};
    int dc[8]={-1, 0, 1, -1, 1, -1, 0, 1};
    int n, m;

    int avg(int row, int col, vector<vector<int>>&img){
        int cnt=1;
        int sum=img[row][col];
        for(int i=0; i<8; i++){
            int nr=row+dr[i];
            int nc=col+dc[i];
            if(nr>=0 && nr<n && nc>=0 && nc<m){
                cnt++;
                sum+=img[nr][nc];
            }
        }
        int average=(floor)(sum/cnt);
        return average;
    }

    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        n=img.size();
        m=img[0].size();
        vector<vector<int>>ans(n, vector<int>(m, 0));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                ans[i][j]=avg(i, j, img);
            }
        }
        return ans;
    }
};
