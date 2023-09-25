class Solution {
public:
    char findTheDifference(string s, string t) {
        int ans=t[t.length()-1];
        for(int i=0;i<t.length()-1;i++)
        {
             ans+=(t[i]);
             ans-=(s[i]);
        }
        return ans;
    }
};
