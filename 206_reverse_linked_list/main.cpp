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
    ListNode* reverseList(ListNode* head) {
        if (head)
        {
            ListNode * newHead = head;
            ListNode * tail = head->next;
            newHead->next = nullptr;
            while (tail)
            {
                ListNode * temp = tail->next;
                tail->next = newHead;
                newHead = tail;
                tail = temp;
            }
            return newHead;
        }
        else
        {
            return head;
        }
    }
};
