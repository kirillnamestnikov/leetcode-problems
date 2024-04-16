#include <limits>

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int diff = std::numeric_limits< int >::max();
        int res = 0;
        std::sort(nums.begin(), nums.end());
        for (size_t i = 0; i < nums.size() - 2; ++i)
        {
            size_t left = i + 1;
            size_t right = nums.size() - 1;
            while (left < right)
            {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == target)
                {
                    return target;
                }
                else if (sum < target)
                {
                    ++left;
                }
                else
                {
                    --right;
                }
                if (std::abs(sum - target) < diff)
                {
                    res = sum;
                    diff = std::abs(sum - target);
                }
            }
        }
        return res;
    }
};
