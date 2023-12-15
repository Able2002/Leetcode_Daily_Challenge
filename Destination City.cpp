class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
       unordered_map<string,int>a;
       for(int i=0;i<paths.size();i++){
            a[paths[i][0]]++;
       }
         for(int i=0;i<paths.size();i++){
            if(a[paths[i][1]]==0){
                return paths[i][1];
            }
       }
       return "";
    }
};
