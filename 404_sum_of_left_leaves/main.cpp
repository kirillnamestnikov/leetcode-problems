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
    int sumOfLeftLeaves(TreeNode* root) {
        int ans = 0;
        sumImpl(root, false, ans);
        return ans;
    }
private:
    void sumImpl(TreeNode * root, bool isLeft, int & ans)
    {
        if (!root)
        {
            return;
        }
        if (isLeft && !root->left && !root->right)
        {
            ans += root->val;
        }
        sumImpl(root->left, true, ans);
        sumImpl(root->right, false, ans);
    }
};
