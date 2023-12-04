class Solution {
public:
    string largestGoodInteger(string num) {
        const int n = num.size();
        string ans ="";
        for(int i = 1 ; i<n-1;i++){
            if(num[i-1]==num[i] and num[i]==num[i+1]){
               string x = "";
                x+=num[i];
                x+=num[i]; x+=num[i];
                ans = max(ans,x);

            }
        }
        return ans;
    }
};
