/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        std::unordered_map< ListNode *, int > res;
        while (headA)
        {
            res[headA] = headA->val;
            headA = headA->next;
        }
        while (headB)
        {
            if (res.find(headB) != res.end())
            {
                return headB;
            }
            headB = headB->next;
        }
        return nullptr;
    }
};
