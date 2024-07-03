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
    vector<int> postorderTraversal(TreeNode* root) {
        std::vector< int > data;
        traverseImpl(root, data);
        std::reverse(data.begin(), data.end());
        return data;
    }
private:
    void traverseImpl(TreeNode * root, std::vector< int > & data)
    {
        if (!root)
        {
            return;
        }
        data.push_back(root->val);
        traverseImpl(root->right, data);
        traverseImpl(root->left, data);
    }
};
