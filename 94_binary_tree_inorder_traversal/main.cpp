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
    vector<int> inorderTraversal(TreeNode* root) {
        std::vector< int > res;
        traverseImpl(root, res);
        return res;
    }
private:
    void traverseImpl(TreeNode * root, std::vector< int > & data)
    {
        if (!root)
        {
            return;
        }
        traverseImpl(root->left, data);
        data.push_back(root->val);
        traverseImpl(root->right, data);
    }
};
