class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n = nums.size(),m=0;
        vector<vector<int>> v(2);
        v[0].push_back(INT_MAX);
        v[1].push_back(INT_MIN);
        for(int i=0;i<n;i++){
            if((nums[i]>v[0][0] && nums[i]<v[1][0]) || (nums[i]<v[1][m] && nums[i]>v[0][m])) return true;
            int s=0,l=m;
            while(l!=s+1 && s!=l){
                int mid = (l+s)/2;
                if(nums[i]>v[0][mid] && nums[i]<v[1][mid]) return true;
                if(nums[i]<=v[0][mid]) s = mid;
                else l = mid;
            }
            if(v[1][m] == INT_MIN && v[0][m]>nums[i]) v[0][m] = nums[i];
            else if(v[1][m]<=nums[i]) v[1][m] = nums[i];
            else{
                v[0].push_back(nums[i]);
                v[1].push_back(INT_MIN);m++;
            }
        }
        return false;
    }
};
