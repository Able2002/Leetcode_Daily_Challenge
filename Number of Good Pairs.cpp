class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans = 0;
        unordered_map<int, int> f;
        for (int& x : nums)
            ans += f[x]++;
        return ans;
    }
};
