class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        while(nums.at(0) != nums.at(nums.at(0))){
            swap(nums.at(0), nums.at(nums.at(0)));
        }
        
        return nums.at(0);
    }
};
