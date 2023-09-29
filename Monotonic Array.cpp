class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return true;
        }
        
        int val1=nums[0];
        int val2=nums[n-1];
        if(val1>val2){
            reverse(nums.begin(), nums.end());
        }
        for(int i=0;i+1<n;i++){
            if(nums[i]>nums[i+1]){
                return false;
            }
        }
        return true;
    }
};
