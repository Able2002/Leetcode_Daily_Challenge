class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size(), ans=0;
        for (int i = 0; i < n / 2; i++) {
            if (i < n - i - 1) {
              int a = nums[i] + nums[n - i - 1];
              ans = max(ans, a);
            }
        }

        return ans;
    }
};
