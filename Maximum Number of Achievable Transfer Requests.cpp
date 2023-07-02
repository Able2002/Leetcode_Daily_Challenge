class Solution {
public:
    void solve(int n , int ind , vector<vector<int> > &requests , vector<int> &indeg , int &ans , int count){

        if(ind == requests.size()){
          int flag =1;
          for(int i =0 ; i < n ;i++){
              if(indeg[i] != 0){
                flag =0 ;
                break;
              }
          }
          if(flag){
              ans = max(ans , count );
          }
          return;
        }
        solve(n ,ind+1 , requests , indeg , ans , count);

        indeg[requests[ind][0]]--;
        indeg[requests[ind][1]]++;

        solve(n ,ind+1 , requests , indeg , ans,count+1);
        indeg[requests[ind][0]]++;
        indeg[requests[ind][1]]--;

    }
    int maximumRequests(int n, vector<vector<int>>& requests) {
        
        int ans = INT_MIN;
        vector<int> indeg(n , 0);
        solve(n ,0, requests, indeg , ans , 0);
        return ans ;

    }
};
