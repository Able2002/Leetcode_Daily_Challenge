class Solution {
public:
    vector<int>bucket;
    int ans;

    void backtracking(vector<int>&cookies,int k,int cookieNumber)
    {
        if(cookieNumber==cookies.size())
        {
            int maxx=0;
            for(int i=0;i<k;i++)
            {
                maxx=max(maxx,bucket[i]);
            }
            ans=min(ans,maxx);
            return;
        }

        for(int j=0; j<k; j++)
        {
            bucket[j]+=cookies[cookieNumber];
            backtracking(cookies,k,cookieNumber+1);
            bucket[j]-=cookies[cookieNumber];
        }

    }



    int distributeCookies(vector<int>& cookies, int k) {
        bucket.resize(k,0);
        ans=INT_MAX;
        backtracking(cookies, k, 0);
        return ans;        
    }
};
