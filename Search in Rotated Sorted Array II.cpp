class Solution {
public:
    bool binarySearch(int s, int e, int &target, vector<int> &nums){
        if(s>e) return false;

        int mid = (s+e)/2;
        if(nums[mid]==target) return true;
        else if(nums[mid]>target) return binarySearch(s, mid-1, target, nums);
        return binarySearch(mid+1, e, target, nums);
    }
    bool search(vector<int>& nums, int target) {
        int idx=0;
        for(int i=1; i<nums.size(); i++){
            if(nums[i-1]>nums[i]) idx = i;
        }

        return binarySearch(0, idx-1, target, nums)|binarySearch(idx, nums.size()-1, target, nums);
    }
};
