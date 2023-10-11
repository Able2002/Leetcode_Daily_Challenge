class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        vector<int>ans(people.size(),0);
       sort(flowers.begin(),flowers.end());
       vector<pair<int,int>>p;
       for(int i=0;i<people.size();i++){
           p.push_back({people[i],i});
       }
       sort(p.begin(),p.end());
       int j=0;
       int cnt=0;
        priority_queue<int,vector<int>,greater<int>>q;
        for(auto i:p){
              int ele=i.first;
              while(j<flowers.size() && flowers[j][0]<=ele){
                  q.push(flowers[j][1]);
                  j++;
              }
              while(!q.empty() && q.top()<ele){
                  q.pop();
              }

ans[i.second]=q.size();
        }
        return ans;
    }
};
