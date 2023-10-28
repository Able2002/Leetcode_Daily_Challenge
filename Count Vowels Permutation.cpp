class Solution {
    private:
    int mod = 1000000007;
    unordered_map<char, vector<char> > mp;
public:
    int vowelPermutations(int n, int i, char prev, vector<vector<long long> >& dp){
        if(i>n){
            return 0;
        }
        
        if(i==n){
            switch(prev){
                case 'a':
                    return 1;
                    break;
                case 'e':
                    return 2;
                    break;
                case 'i':
                    return 4;
                    break;
                case 'o':
                    return 2;
                    break;
                case 'u':
                    return 1;
                    break;
                default:
                    return 5;
            }
        }
        
        int index = prev - 'a';
        if(dp[i][index] != -1){
            return dp[i][index];
        }
        
        long long result = 0;
        for(auto next:mp[prev]){
            result += vowelPermutations(n, i+1, next, dp);
        }
        
        dp[i][index] = result%mod;
        return dp[i][index];
    }
    int countVowelPermutation(int n) {
        mp['b'] = {'a', 'e','i','o', 'u'};
        mp['a'] = {'e'};
        mp['e'] = {'a','i'};
        mp['i'] = {'a', 'e', 'o', 'u'};
        mp['o'] = {'i','u'};
        mp['u'] = {'a'};
        
        vector<vector<long long> > dp(n+2, vector<long long>(27, -1));
        int len = 1;
        char prev = 'b';
        return vowelPermutations(n, len, prev, dp);
    }
};
