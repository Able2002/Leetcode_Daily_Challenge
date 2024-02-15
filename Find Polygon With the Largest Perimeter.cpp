class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        long long ans = 0, cur = 0;
        for(int i=0; i<n; i++){
            if(cur > nums[i] && i >= 2){
                ans = max(cur, ans);
                ans += nums[i];
            }
            cur += nums[i];
        }
        if(ans == 0) return -1;
        return ans ;
    }
};
