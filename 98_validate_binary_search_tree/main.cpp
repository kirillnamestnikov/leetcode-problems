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
    bool isValidBST(TreeNode* root) {
        if (!root)
        {
            return false;
        }
        std::vector< int > data;
        track(root, data);
        for (size_t i = 1; i < data.size(); ++i)
        {
            if (data[i] <= data[i - 1])
            {
                return false;
            }
        }
        return true;
    }
private:
    void track(TreeNode * root, std::vector< int > & data)
    {
        if (root)
        {
            track(root->left, data);
            data.push_back(root->val);
            track(root->right, data);
        }
    }
};
