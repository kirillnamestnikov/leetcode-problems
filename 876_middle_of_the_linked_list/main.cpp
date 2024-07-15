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
    ListNode* middleNode(ListNode* head) {
        auto temp = head;
        int size = 0;
        while (temp)
        {
            ++size;
            temp = temp->next;
        }
        int i = 0;
        while (head)
        {
            if (i == size / 2)
            {
                return head;
            }
            ++i;
            head = head->next;
        }
        return head;
    }
};
