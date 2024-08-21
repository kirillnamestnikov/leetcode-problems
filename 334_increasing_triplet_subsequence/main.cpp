#include <numeric>

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if (nums.size() < 3)
        {
            return false;
        }
        int first = std::numeric_limits< int >::max();
        int second = std::numeric_limits< int >::max();
        for (const auto & num: nums)
        {
            if (num <= first)
            {
                first = num;
            }
            else if (num <= second)
            {
                second = num;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};
