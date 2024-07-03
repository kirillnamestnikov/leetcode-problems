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
    bool hasCycle(ListNode *head) {
        std::unordered_set< ListNode * > set;
        while (head)
        {
            if (std::find(set.begin(), set.end(), head) != std::end(set))
            {
                return true;
            }
            set.insert(head);
            head = head->next;
        }
        return false;
    }
};
