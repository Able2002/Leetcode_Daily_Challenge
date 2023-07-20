class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        int x,y;
        for(auto u:asteroids)
        {
             st.push(u);
             while(st.size()>=2)
             {
                 x=st.top();
                 st.pop();
                 y=st.top();
                 st.pop();
                 if(x*y<0 && x<0)
                 {
                     if(abs(x)>abs(y))
                         st.push(x);
                     else if(abs(x)==abs(y))
                        continue;
                     else
                         st.push(y);
                 }
                 else 
                 {
                     st.push(y);
                     st.push(x);
                     break;
                 }
             }
        }
        vector<int>ans;
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
