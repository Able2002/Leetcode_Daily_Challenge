class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> mp(n+1);
        for(auto i: trust)
        {
            int ai = i[0],bi = i[1];
            mp[bi]++;
            mp[ai]--;
        }
        for(int i=1;i<=n;i++){
            if(mp[i]==n-1) return i;
        }
        return -1;
    }
};
