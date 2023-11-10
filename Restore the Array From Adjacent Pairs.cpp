class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& nums) {
        vector<int> ans;
        unordered_map<int,vector<int>> mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
              mp[nums[i][0]].push_back(i);
              mp[nums[i][1]].push_back(i);
        }

        int j=0;
        while(ans.size()<n+1)
        {
            if(ans.empty())
            {
                for(int i=0;i<n;i++)
                {
                    if(mp[nums[i][0]].size()==1)
                    {
                        ans.push_back(nums[i][0]);
                        j=i;
                        break;
                    }
                    if(mp[nums[i][1]].size()==1)
                    {
                        ans.push_back(nums[i][1]);
                        j=i;
                        break;
                    }
                }
            }
                if(ans.back()!=nums[j][0])
                {
                    ans.push_back(nums[j][0]);
                    for(auto it:mp[nums[j][0]])
                    {
                      if(j!=it)
                      {
                          j=it;
                          break;
                      }   
                    }
                }
                else 
                {
                    ans.push_back(nums[j][1]);
                    for(auto it:mp[nums[j][1]])
                    {
                      if(j!=it)
                      {
                          j=it;
                          break;
                      }   
                    }

                }

            
        }
        return ans;

    }
};
