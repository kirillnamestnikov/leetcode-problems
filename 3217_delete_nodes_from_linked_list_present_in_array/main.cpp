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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        std::unordered_set< int > set;
        for (const auto & num: nums)
        {
            set.insert(num);
        }
        ListNode * ans = head;
        while (ans && (set.find(ans->val) != set.end()))
        {
            ans = ans->next;
        }
        head = ans;
        while (head && head->next)
        {
            if (set.find(head->next->val) != set.end())
            {
                head->next = head->next->next;
            }
            else
            {
                head = head->next;
            }
        }
        return ans;
    }
};
