class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();
        int c = matrix[0].size();
        
        int s = 0;
        int e = r*c - 1;
        while(s<=e){
            int mid = s + (e-s)/2;
            int val = matrix[mid/c][mid%c];
            
            if(val==target){
                return true;
            }
            else if(val>target){
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }
        return false;
    }
};
