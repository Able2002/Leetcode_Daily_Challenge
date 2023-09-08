class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pasc(numRows);
        
        for(int i=0;i<numRows;i++){
            pasc[i].resize(i+1);
            pasc[i][0] = pasc[i][i] = 1;
            for(int j=1;j<i;j++){
                pasc[i][j] = pasc[i-1][j-1] + pasc[i-1][j]; 
            }
        }
        
        return pasc;
    }
};
