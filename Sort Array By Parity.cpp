class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int oddnum;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]%2 != 0) 
                oddnum = i;
            break;
        }
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]%2 == 0){
                swap(nums[i], nums[oddnum]);
                oddnum++;
            }
        }
        return nums;
    }
};
