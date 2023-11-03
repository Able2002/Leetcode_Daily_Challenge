class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>s;
        int x=1;
        vector<int>v;
        int j=0;
        for(int i=1;i<=n;i++){
            v.push_back(i);
            s.push_back("Push");
            if(i==target[j]){
                j++;
            }
            else{
                v.pop_back();
                s.push_back("Pop");
            }
            if(v==target) break;
        }
        return s;
    }
};
