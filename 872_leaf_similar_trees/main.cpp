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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        std::vector< int > vec1;
        doVector(root1, vec1);
        std::vector< int > vec2;
        doVector(root2, vec2);
        return vec1 == vec2;
    }
private:
    void doVector(TreeNode * root, std::vector< int > & data)
    {
        if (!root)
        {
            return;
        }
        doVector(root->left, data);
        if (!root->left && !root->right)
        {
            data.push_back(root->val);
        }
        doVector(root->right, data);
    }
};
