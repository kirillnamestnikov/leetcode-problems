class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i = 0;
        int j = 0;
        int size = nums.size();
        int count = 0;
        int res = 0;
        while (j < size)
        {
            if (nums[j] == 0)
            {
                ++count;
            }
            while (count > 1)
            {
                if (nums[i] == 0)
                {
                    --count;
                }
                ++i;
            }
            res = std::max(j - i + 1, res);
            ++j;
        }
        return res - 1;
    }
};
