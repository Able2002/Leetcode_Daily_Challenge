class Solution {
public:
    string tree2str(TreeNode* root) {
        if(root==nullptr){
            return "";
        }      
        string s = to_string(root->val);
        if(root->left){
            s+= '(' + tree2str(root->left) + ')';
        }
        
        if(root->right){
            if(root->left==nullptr){
                s += "()";
            }
            s+= '(' + tree2str(root->right) + ')';
        }       
        return s;
    }
};
