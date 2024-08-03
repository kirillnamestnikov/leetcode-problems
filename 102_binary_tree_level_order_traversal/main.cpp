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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (!root)
        {
            return {};
        }
        std::vector< std::vector< int > > ans;
        std::vector< int > temp;
        std::queue< TreeNode * > queue;
        TreeNode * curr = root;
        queue.push(curr);
        int n = 0;
        while (!queue.empty())
        {
            n = queue.size();
            for (int i = 0; i < n; ++i)
            {
                curr = queue.front();
                queue.pop();
                temp.push_back(curr->val);
                if (curr->left)
                {
                    queue.push(curr->left);
                }
                if (curr->right)
                {
                    queue.push(curr->right);
                }
            }
            ans.push_back(temp);
            temp.clear();
        }
        return ans;
    }
};
