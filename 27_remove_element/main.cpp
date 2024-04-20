class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        size_t count = 0;
        for (size_t i = 0; i < nums.size(); ++i)
        {
            if (nums[i] == val)
            {
                continue;
            }
            nums[count] = nums[i];
            ++count;
        }
        return count;
    }
};
