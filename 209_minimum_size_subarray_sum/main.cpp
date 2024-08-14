#include <numeric>

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int j = 0;
        int sum = 0;
        int res = std::numeric_limits< int >::max();
        for (int i = 0; i < nums.size(); ++i)
        {
            sum += nums[i];
            if (sum < target)
            {
                continue;
            }
            else if ((sum >= target) && (j <= i))
            {
                sum -= (nums[i] + nums[j]);
                res = std::min(res, i - j + 1);
                ++j;
                --i;
            }
        }
        return (res == std::numeric_limits< int >::max()) ? 0 : res;
    }
};
