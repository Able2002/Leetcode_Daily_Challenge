class Solution {
public: 
   int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int periods = minutesToTest/minutesToDie;
        return ceil(log2(buckets) / log2(periods+1));
    }
};
