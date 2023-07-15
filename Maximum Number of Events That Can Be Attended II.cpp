class Solution {
public:
    
    int binary(vector<vector<int>> &events,int i,int lastday){
        int low=i+1;
        int high=events.size()-1;
        int ans=events.size();
        while(low<=high){
            int mid=(low+high)/2;
            if(events[mid][0]>lastday){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
    
    int help(vector<vector<int>>& events,int i,int k,vector<vector<int>> &dp){
        if(i==events.size() || k==0){
            return 0;
        }
        if(dp[i][k]!=-1){
            return dp[i][k];
        }
        int nextindex=binary(events,i,events[i][1]);
        
        int take=events[i][2] + help(events,nextindex,k-1,dp);
        int notTake=help(events,i+1,k,dp);
        return dp[i][k]=max(take,notTake);
    }
    
    int maxValue(vector<vector<int>>& events, int k) {
        vector<vector<int>> dp(events.size()+1,vector<int> (k+1,-1));
        sort(events.begin(), events.end());

        return help(events,0,k,dp);

    }
};
