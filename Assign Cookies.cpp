class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
         sort(g.begin(),g.end());
         sort(s.begin(),s.end());
         int ans =0;
         int j=0;
        for(auto it: g){
            while(j<s.size() && s[j]<it) j++;
            if(j==s.size()) return ans;
            else{
                ans++;
                j++;
            }
        }
         return ans;
    }
};
