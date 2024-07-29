#include <numeric>
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
    int kthSmallest(TreeNode* root, int k) {
        int i = 1;
        int maxNum = std::numeric_limits< int >::max();
        std::stack< TreeNode * > stack;
        TreeNode * temp = root;
        while (temp || !(stack.empty()))
        {
            if (temp)
            {
                stack.push(temp);
                temp = temp->left;
            }
            else
            {
                temp = stack.top();
                stack.pop();
                if (i == k)
                {
                    return temp->val;
                }
                if (temp->val < maxNum)
                {
                    maxNum = temp->val;
                }
                ++i;
                temp = temp->right;
            }
        }
        return -1;
    }
};
