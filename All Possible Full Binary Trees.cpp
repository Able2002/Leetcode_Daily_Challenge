class Solution {
public:
    vector<TreeNode*> helper(int n){
        if(n==1)
            return {new TreeNode(0)};
        vector<TreeNode*> ans;
        for(int i=1;i<n;i+=2){
            vector<TreeNode*> left = helper(i);
            vector<TreeNode*> right = helper(n-i-1);
            for(auto l:left){
                for(auto r:right){
                    TreeNode* root = new TreeNode();
                    root->left = l;
                    root->right = r;
                    ans.push_back(root);
                }
            }
        }
        return ans;
    }
    vector<TreeNode*> allPossibleFBT(int n) {
        return helper(n);
    }
};
