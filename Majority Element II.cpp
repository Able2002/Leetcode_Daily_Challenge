class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
      if(n==1){
        return nums;
          }
      else  if(n==2 && nums[0] != nums[1]){
            return nums;
        }
        vector<int> ans;
        int cnt = 0;
        int temp = n/3;
        for(int i=0;i<n;i++){
            
            if( i>0 && nums[i] == nums[i-1]){
               cnt++;
                if(cnt > temp && find(ans.begin(), ans.end(), nums[i]) == ans.end()){
                    ans.push_back(nums[i]);
                   
                }
            }
            else{
                cnt = 1;
            }
        }
        return ans;
    }
};
