class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>> dist(m , vector<int>(n));
        vector<vector<bool>> vis(m, vector<bool>(n, 0));
        queue<pair<pair<int, int>, int>> q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0){
                    vis[i][j] = 1;
                    q.push({{i, j}, 0});
                }
            }
        }
        
        int di[] = {0, -1, 0, 1};
        int dj[] = {-1, 0, 1, 0};
        while(!q.empty()){
            int r = q.front().first.first;
            int c = q.front().first.second;
            int steps = q.front().second;
            q.pop();
            dist[r][c] = steps;
            for(int i=0;i<4;i++){
                int nr = r + di[i];
                int nc = c + dj[i];
                
                if(nr>=0 && nr<m && nc>=0 && nc<n && vis[nr][nc]==0){
                    vis[nr][nc]=1;
                    q.push({{nr, nc}, steps+1});
                }
            }
        }
        return dist;
    }
};
