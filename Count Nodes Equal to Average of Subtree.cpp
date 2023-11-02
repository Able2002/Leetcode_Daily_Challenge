class Solution {
public:

    int result = 0;

    int traverse(TreeNode* node, int &currentSum){

        if(node == nullptr){
            return 0;
        }

        int temp = currentSum;
        currentSum = currentSum + node->val;

        int left = 0, right = 0;

        if(node->left!=nullptr)
        left = 1 + traverse(node->left, currentSum);

        if(node->right!=nullptr)
        right = 1 + traverse(node->right, currentSum);

        int n = left + right;

        int avg = int(floor(((currentSum - temp) / ((n+1) * 1.0))));

        if(avg == node->val){
            result++;
        }

        return n;
    }

    int averageOfSubtree(TreeNode* root) {

        int sum = 0;

        traverse(root, sum);

        return result;
        
    }
};
