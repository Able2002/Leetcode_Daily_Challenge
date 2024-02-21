class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        if (right<=left || left == 0) return left;
        long closest = 1;
        int num = 2147483647;
        long diff = right - left;
        while (closest<=diff)
        {
            num = num-closest;
            closest*=2;
        }
        int num1 = right & num;
        return left&num1;
    }
};
