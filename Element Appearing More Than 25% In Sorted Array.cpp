class Solution {
public:
    int findSpecialInteger(vector<int>& aa) {
        map<int,int>mp;
        int m=aa.size();
        int mx=0,a;
        for(int i=0;i<aa.size();i++)
        {
            mp[aa[i]]++;
        }
        for(auto it:mp)
        {
            if(it.second>m/4)
            {
             // a=it.second;
               mx=max(mx,it.first);

            }
        }
        cout<<a<<endl;
        return mx;
    }
};
