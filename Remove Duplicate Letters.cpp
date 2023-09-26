class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n=s.size();
        string result;
        vector<int>lastindex(26);
        vector<bool>taken(26,false);

        for(int i=0;i<n;i++){
            lastindex[s[i]-'a']=i;
        }

        for(int i=0;i<n;i++){
            char ch=s[i];
            int idx=ch-'a';

            if(taken[idx]==true)continue;

            while(result.size()>0 and result.back()>ch and lastindex[result.back()-'a']>i){
                taken[result.back()-'a']=false;
                result.pop_back();

            }
            result.push_back(ch);
            taken[idx]=true;


        }
        return result;
    }
};
