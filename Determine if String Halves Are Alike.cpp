class Solution {
public:
    
    bool vowelCheck(char ch){
        if(ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u' or ch=='A' or ch=='E' or 
              ch=='I' or ch=='O' or ch=='U'){
            return true;
        }
        return false;
    }
    
    bool halvesAreAlike(string s) {
        int cnt=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(i<n/2){
            if(vowelCheck(s[i])){
                cnt++;
            }
            }
            
            else{
            if(vowelCheck(s[i])){
                cnt--;
            }
            }
        }
        
        return cnt==0;
    }
};
