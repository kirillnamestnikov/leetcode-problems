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
    vector<int> findMode(TreeNode* root) {
        std::vector< int > res;
        int prev = 0;
        size_t count = 0;
        size_t maxCount = 0;
        traverse(root, prev, count, maxCount, res);
        return res;
    }
private:
    void traverse(TreeNode * root, int & prev, size_t & count, size_t & maxCount, std::vector< int > & data)
    {
        if (!root)
        {
            return;
        }
        traverse(root->left, prev, count, maxCount, data);
        int curr = root->val;
        if (curr != prev)
        {
            count = 0;
            prev = curr;
        }
        ++count;
        if (count == maxCount)
        {
            data.push_back(curr);
        }
        else if (count > maxCount)
        {
            data = {curr};
            maxCount = count;
        }
        traverse(root->right, prev, count, maxCount, data);
    }
};
