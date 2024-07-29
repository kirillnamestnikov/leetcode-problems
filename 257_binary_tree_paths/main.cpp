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
    vector<string> binaryTreePaths(TreeNode* root) {
        if (!root)
        {
            return {};
        }
        std::vector< std::string > res;
        getPaths(root, "", res);
        return res;
    }
private:
    void getPaths(TreeNode * root, std::string path, std::vector< std::string > & paths)
    {
        if (!root)
        {
            return;
        }
        if (!path.empty())
        {
            path += "->";
        }
        path += std::to_string(root->val);
        if (!root->left && !root->right)
        {
            paths.push_back(path);
        }
        else
        {
            getPaths(root->left, path, paths);
            getPaths(root->right, path, paths);
        }
    }
};
