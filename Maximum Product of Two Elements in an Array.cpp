class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int m1 = 1;
        int m2 = 1;
        for(auto n : nums)
        {
            if(n>=m1)
            {
                if (n >= m2)
                    swap (n ,m2);
                m1 = n;
            }
        }
        return(m1-1)*(m2-1);
    }
};
