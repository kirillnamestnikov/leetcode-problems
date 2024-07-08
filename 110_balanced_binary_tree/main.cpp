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
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if (!root)
        {
            return true;
        }
        if (std::abs(maxDepth(root->left) - maxDepth(root->right)) >= 2)
        {
            return false;
        }
        if (isBalanced(root->left) && isBalanced(root->right))
        {
            return true;
        }
        return false;
    }
private:
    int maxDepth(TreeNode* root) {
        if (!root)
        {
            return 0;
        }
        int x = maxDepth(root->left);
        int y = maxDepth(root->right);
        int max = std::max(x, y) + 1;
        return max;
    }
};
