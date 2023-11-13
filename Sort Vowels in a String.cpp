class Solution {
public:
    string sortVowels(string s) {
        priority_queue<char, vector<char>, greater<char>> temp;
        int n = s.size();
        for(int i=0;i<n;i++){
            char x = s[i];
             if (x == 'a' or x == 'e' or x == 'i' or 
                   x == 'o' or x == 'u' or x == 'A' or x == 'E' or x == 'I' or 
                   x == 'O' or x == 'U'){
                 temp.push(x);
             }
        }
     
        string ans = "";
        for(int i=0;i<n;i++){
            char x = s[i];
             if (x == 'a' or x == 'e' or x == 'i' or 
                   x == 'o' or x == 'u' or x == 'A' or x == 'E' or x == 'I' or 
                   x == 'O' or x == 'U'){
                 ans += temp.top();
                 temp.pop();
             }
            else{
                ans += s[i];
            }
        }
        return ans;
    }
};
