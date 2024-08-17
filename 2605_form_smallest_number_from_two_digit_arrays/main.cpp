#include <numeric>

class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        int minNum1 = std::numeric_limits< int >::max();
        int minNum2 = std::numeric_limits< int >::max();
        int minNum = std::numeric_limits< int >::max(); 
        for (const auto & num: nums1)
        {
            if (std::find(nums2.begin(), nums2.end(), num) != std::end(nums2))
            {
                minNum = std::min(minNum, num);
            }
        }
        if (minNum != std::numeric_limits< int >::max())
        {
            return minNum;
        }
        minNum1 = *std::min_element(nums1.begin(), nums1.end());
        minNum2 = *std::min_element(nums2.begin(), nums2.end());
        if (minNum1 < minNum2)
        {
            return minNum1 * 10 + minNum2;
        }
        else
        {
            return minNum2 * 10 + minNum1;
        }
    }
};
