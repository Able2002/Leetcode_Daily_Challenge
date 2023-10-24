class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        if(!root) return {};
        vector<vector<int>> lot;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int size = q.size();
            vector<int> temp;
            while(size--)
            {   
                TreeNode * node = q.front();
                q.pop();
                temp.push_back(node->val);
                if(node->left) {
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
            }
            lot.push_back(temp);
        }
        vector<int> res;
        for(auto i : lot)
        {   
            int maxi = INT_MIN;
            for(int j : i)
            {
                maxi = max(maxi,j);
            }
            res.push_back(maxi);
        }
        return res;
    }
};
