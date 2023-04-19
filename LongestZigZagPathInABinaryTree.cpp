

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
private:
    int zigzagLength = 0;

    void dfs(TreeNode *node, bool turnLeft, int steps)
    {
        if (node == nullptr)
            return;

        zigzagLength = max(zigzagLength, steps);

        if (turnLeft)
        {
            dfs(node->left, false, steps + 1);
            dfs(node->right, true, 1);
        }
        else
        {
            dfs(node->left, false, 1);
            dfs(node->right, true, steps + 1);
        }
    }

public:
    int longestZigZag(TreeNode *root)
    {
        dfs(root, false, 0);
        dfs(root, true, 0);

        return zigzagLength;
    }
};

// Time Complexity: O(N)
// Space Complexity: O(N)
