class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        size_t decrease = 1;
        size_t increase = 1;
        size_t res = 0;
        for (size_t i = 1; i < nums.size(); ++i)
        {
            if (nums[i] < nums[i - 1])
            {
                ++decrease;
                res = std::max(res, increase);
                increase = 1;
            }
            else if (nums[i] > nums[i - 1])
            {
                ++increase;
                res = std::max(res, decrease);
                decrease = 1;
            }
            else
            {
                res = std::max(res, increase);
                res = std::max(res, decrease);
                increase = 1;
                decrease = 1;
            }
        }
        res = std::max(res, increase);
        res = std::max(res, decrease);
        return res;
    }
};
