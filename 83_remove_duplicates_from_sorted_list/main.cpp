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
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if ((!head) || (!head->next))
        {
            return head;
        }
        ListNode * node1 = head;
        ListNode * node2 = node1->next;
        while (node2)
        {
            if (node1->val == node2->val)
            {
                node1->next = node2->next;
                node2 = node1->next;
            }
            else
            {
                node1 = node1->next;
                node2 = node2->next;
            }
        }
        return head;
    }
};
