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
    bool isUnivalTree(TreeNode* root) {
        if (!root)
        {
            return true;
        }
        std::queue< TreeNode * > traverseQueue;
        TreeNode * current = root;
        int data = current->val;
        traverseQueue.push(current);
        while (!traverseQueue.empty())
        {
            current = traverseQueue.front();
            traverseQueue.pop();
            if (current->val != data)
            {
                return false;
            }
            if (current->left)
            {
                traverseQueue.push(current->left);
            }
            if (current->right)
            {
                traverseQueue.push(current->right);
            }
        }
        return true;
    }
};
