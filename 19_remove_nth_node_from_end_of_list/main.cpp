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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * temp = head;
        int size = 0;
        while (temp)
        {
            ++size;
            temp = temp->next;
        }
        if ((size == 1) || (size == 0))
        {
            return {};
        }
        int i = 0;
        ListNode * node1 = head;
        if (i == size - n)
        {
            head = head->next;
            return head;
        }
        while (node1)
        {
            if (i + 1 == size - n)
            {
                node1->next = node1->next->next;
            }
            else
            {
                node1 = node1->next;
            }
            ++i;
        }
        return head;
    }
};
