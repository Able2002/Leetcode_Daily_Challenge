class Solution {
public:
    
    static int compare(int a, int b){
        int v1 =  __builtin_popcount(a);
        int v2 =  __builtin_popcount(b);
        if(v1 != v2)
        return v1<v2;
        
        else
        return a<b;
    }
    
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), compare);
        return arr;
    }
};
