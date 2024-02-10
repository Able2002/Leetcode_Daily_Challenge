class Solution {
public:
    int count{0};
    bool isPalindrome(string str){
        int left  = 0;
        int right = str.size()-1;

        while(left<right){
            if(str[left] != str[right])
                return false;
            left++;
            right--;
        }
        return true;
    }
    void solve(string str){
        if(isPalindrome(str))
            count++;
    }
    int countSubstrings(string s) {
        int n = s.size();
        int j = 1;
        for(int i{0};i<n;i++){
            for(int j{i};j<n;j++){
                solve(s.substr(i,j-i+1));
            }
        }
        return count;
    }
};
