class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int res = 0;
        for (size_t i = 0; i < nums.size() - 1; ++i)
        {
            if ((nums[i] == nums[i + 1]) && ((i - res) % 2 == 0))
            {
                ++res;
            }
        }
        return ((nums.size() - res) % 2 == 1) ? res + 1 : res;
    }
};
