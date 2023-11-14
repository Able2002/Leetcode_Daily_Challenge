class Solution {
public:
    int countPalindromicSubsequence(string s) 
    {
        int n = s.length();
        vector<pair<int,int>>indices(26,{-1,-1});

        for(int i=0 ; i<n ; i++)
        {
            char ch = s[i];
            int index = ch - 'a';

            if(indices[index].first == -1)
            {
                indices[index].first = i;
            }

            indices[index].second = i;
        }

        int ans = 0;
        
        for(int i=0 ; i<26 ; i++)
        {
            int left = indices[i].first;
            int right = indices[i].second;

            if(left == -1) continue;

            unordered_set<char>st;

            for(int j = left+1 ; j<right ; j++)
            {
                char ch = s[j];
                st.insert(ch);
            }

            ans += st.size();
        }
        return ans;
    }
};
