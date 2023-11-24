class Solution {
int findSecondMaxi(int i, int j, int k, int maxi){
    if(maxi == i && k < j) return j;
    else if(maxi == j && i < k) return k;
    else return i;
}
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int i = 0;
        int j = piles.size()-1;
        int k = piles.size()-2;
        int res = 0;
        while(i < j && i < k && k < j){
            int maxi = max(piles[i], max(piles[j],piles[k]));
            int secondMaxi = findSecondMaxi(piles[i],piles[j], piles[k], maxi);
            res += secondMaxi;
            i++;
            j -= 2;
            k -= 2;
        }
        return res;
    }
};
