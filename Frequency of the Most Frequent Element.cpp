class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int l=nums.size()-1, h = l;
        int sum = 0, res = 0;
        while(h>=0){
            sum += nums[l]-nums[h];
            while(sum > k){
                int x = nums[l]-nums[l-1];
                l--;
                sum -= x*(l-h+1);
            }
            res = max(res, (l-h+1));
            h--;
        }
        return res;
    }
};
