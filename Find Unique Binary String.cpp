class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string ans="";
        int n=nums[0].size();
        int p=0;
        for(auto i:nums)
        {
            if(i[p]=='0')
              ans+="1";
            else
              ans+="0";
            p++;
        }
        return ans;
    }
};
