class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        int i =k, j=k;
        int maxi = nums[k];
        int mini = nums[k];

        while(i>0 || j<nums.size()-1) {
            if(i ==0 || (j < nums.size()-1 && nums[j+1] > nums[i-1])) {
                j++;
            }else {
                i--;
            }

            mini = min(mini, min(nums[i], nums[j]));
            maxi = max(maxi, (mini * (j-i +1)));
        }
        return maxi;
    }
};
