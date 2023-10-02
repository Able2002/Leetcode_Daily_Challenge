class Solution {
public:
    bool winnerOfGame(string colors) {
        int n = colors.size();
        int a = 0,b = 0;
        for(int i=0;i<n-2;i++){
            if(colors[i]=='A' && i+2<n && colors[i+1]=='A' && colors[i+2]=='A')
            a++;
            if(colors[i]=='B' && i+2<n && colors[i+1]=='B' && colors[i+2]=='B')
            b++;
        }
        if(a>b)return true;
        return false;

    }
};
