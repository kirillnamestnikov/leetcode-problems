class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int res = 1;
        int max = *std::max_element(nums.begin(), nums.end());
        int temp = 0;
        for (size_t i = 0; i < nums.size(); ++i)
        {
            if (nums[i] == max)
            {
                ++temp;
            }
            else
            {
                res = std::max(res, temp);
                temp = 0;
            }
        }
        res = std::max(res, temp);
        return res;
    }
};
