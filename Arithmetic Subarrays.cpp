class Solution {
public:
    bool isvalid(int start,int end,vector<int>nums){
        vector<int>temp;
        for(int i=start;i<=end;i++){
            temp.push_back(nums[i]);
        }
        sort(temp.begin(),temp.end());
        int Size=temp.size();
        int curr=temp[1]-temp[0];
        for(int i=1;i<Size-1;i++){
             if(curr!=(temp[i+1]-temp[i])) return false;
        }
        return true;

    }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
       int lSize=l.size();
       int rSize=r.size();
       int i=0; // l
       int j=0; // r
       vector<bool>ans;
       while(i<lSize && j<rSize){
          ans.push_back(isvalid(l[i],r[j],nums));
          i++;
          j++;
       }
        return ans;
    }
   
};
