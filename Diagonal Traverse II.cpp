class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<pair<int,int>> v;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[i].size();j++){
                v.push_back({i+j , j});
            }
        }
        auto cmp = [&](pair<int,int> a, pair<int,int> b)->bool{
            if(a.first != b.first)return a.first < b.first;
            return a.second < b.second;
        };
        sort(v.begin(),v.end(),cmp);
        vector<int> ans;
        for(auto i: v){
            ans.push_back(nums[i.first-i.second][i.second]);
        }
        return ans;
    }
};
