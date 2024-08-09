/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* sortedListToBST(ListNode* head) {
        std::vector< int > vec;
        while (head)
        {
            vec.emplace_back(head->val);
            head = head->next;
        }
        return makeBst(vec, 0, vec.size() - 1);
    }
private:
    TreeNode * makeBst(std::vector< int > & vec, int l, int r)
    {
        if (l > r)
        {
            return nullptr;
        }
        int mid = l + (r - l) / 2;
        TreeNode * root = new TreeNode(vec[mid]);
        root->left = makeBst(vec, l, mid - 1);
        root->right = makeBst(vec, mid + 1, r);
        return root;
    }
};
