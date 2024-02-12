class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majorityIndex = 0;
        int cnt = 1;
        for(int i=0;i<nums.size();i++){
            if(nums[majorityIndex] == nums[i]){
               cnt++;
            }
            else{
               cnt--;
            }
            if(cnt == 0){
               majorityIndex = i;
               cnt = 1;
            }
        }
        return nums[majorityIndex];
    }
};
