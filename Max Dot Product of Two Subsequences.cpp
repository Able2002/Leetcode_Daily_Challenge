class Solution {
public:
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<vector<int>>> v(2, vector<vector<int>> (nums1.size(), vector<int>(nums2.size(), INT_MAX)));
        return dfs(nums1, nums2, 0, 0, v, false);
    }
    int dfs(vector<int>& nums1, vector<int>& nums2, int i, int y, vector<vector<vector<int>>>& v, bool isGood){
        if (i == nums1.size() || y == nums2.size()) return isGood ? 0 : INT_MIN;
        if (v[isGood][i][y] != INT_MAX) return v[isGood][i][y];
        v[isGood][i][y] = nums1[i] * nums2[y] + dfs(nums1, nums2, i + 1, y + 1, v, true);
        int s = dfs(nums1, nums2, i + 1, y, v, isGood);
        int t = dfs(nums1, nums2, i, y + 1, v, isGood);
        return v[isGood][i][y] = max(v[isGood][i][y], max(s, t));
    }
};
