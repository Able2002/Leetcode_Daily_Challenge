class Solution {
public:
    int dp[2001][2002];
    int fun(vector<int>&st,int i,int k)
    {
        if(i+1>=st.size()) return 1;
        //cout<<st[i]<<" "<<k<<"\n";
        if(k==0 || st[i]+k<st[i+1]) return 0;
        if(dp[i][k]!=-1) return dp[i][k];
        int ans,j=i+1;
        while(j<st.size() && st[i]+k>st[j]  )j++;
        if(j>=st.size() || st[j]!=st[i]+k ) return 0;
        //cout<<st[i]<<" "<<st[j]<<" "<<k<<"\n";
        ans=fun(st,j,k) | fun(st,j,k-1) | fun(st,j,k+1);
        dp[i][k]=ans;
        return ans;
    }
    bool canCross(vector<int>& stones) {
        memset(dp,-1,sizeof(dp));
        return fun(stones,0,1);;
    }
};
