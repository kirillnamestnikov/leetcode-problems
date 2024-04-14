#include <limits>

class Solution {
public:
    int searchInsert(vector<int>& nums, int target){
        int max = std::numeric_limits< int >::max();
        nums.push_back(max);
        size_t start = 0;
        size_t end = nums.size() - 1;
        size_t mid = nums.size();
        while (start < end)
        {
            mid = (start + end) / 2;
            if (target > nums[mid])
            {
                start = mid + 1;
            }
            else
            {
                end = mid;
            }
        }
        return start;
    }
};
