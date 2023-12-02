class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {

        vector<char>ch(26, 0);
        for(char chs : chars){
            ch[chs - 'a'] += 1;
        }
        int flag;
        int ans = 0;
        for(string word : words){
            if(word.length() > chars.length()) continue;
            vector<char>temp(26, 0);
            flag = 1;
            for(char chs : word){
                temp[chs - 'a']+=1;
            }
            for(char chs : word){
                if(ch[chs - 'a'] < temp[chs - 'a']){
                    flag = 0;
                    break;
                }
            }
            if(flag) ans+=word.length();
        }
        return ans;
    }
};
