class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int>countBits(32,0);
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<32;j++){
                if(1<<j&nums[i]){
                    countBits[j]++;
                }
            }
        }
        int ans=0;
        for(int i=0;i<32;i++){
            if(countBits[i]%3!=0){
                ans+=1<<i;
            }
        }
        return ans;
    }
};
