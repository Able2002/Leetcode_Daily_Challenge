class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
         vector<int> row(grid.size());
        vector<int> col(grid[0].size());
        for(int i = 0; i < grid.size(); ++i){
            for(int j = 0; j < grid[0].size(); ++j){
                row[i] += grid[i][j];
                col[j] += grid[i][j];
            }
        }
        for(int i = 0; i < grid.size(); ++i){
            for(int j = 0; j < grid[0].size(); ++j){
               grid[i][j] = row[i] + col[j] - (grid.size()-row[i]) - (grid[0].size()-col[j]);
            }
        }
        return grid;
    }
};
