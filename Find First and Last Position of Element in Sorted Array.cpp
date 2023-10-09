class Solution {
public:
    int binSearch(int target,vector<int>& nums){
        int n=nums.size();
        int s=0,e=n-1;
        int idx=-1;

        while(s<=e){
            int mid= s+(e-s)/2;
            if(nums[mid]<=target){
                idx=mid;
                s=mid+1;
            }else e=mid-1;
        }
        return idx;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==0) return {-1,-1};
        int right=binSearch(target,nums);
        if(right==-1 || nums[right]!=target)
            return {-1,-1};
        int left=binSearch(target-1,nums)+1;
        return {left,right};        
    }
};
