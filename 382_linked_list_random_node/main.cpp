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
    Solution(ListNode* head)
    {
        head_ = head;
        size_ = getSize();
    }
    int getRandom()
    {
        int index = std::rand() % size_;
        ListNode * temp = head_;
        while (index)
        {
            --index;
            temp = temp->next;
        }
        return temp->val;
    }
private:
    ListNode * head_;
    int size_;
    int getSize() const
    {
        ListNode * temp = head_;
        int size = 0;
        while (temp)
        {
            ++size;
            temp = temp->next;
        }
        return size;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */
