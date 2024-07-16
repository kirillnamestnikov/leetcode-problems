class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool increase = true;
        bool decrease = true;
        for (size_t i = 1; i < nums.size(); ++i)
        {
            increase = increase && (nums[i] >= nums[i - 1]);
            decrease = decrease && (nums[i] <= nums[i - 1]);
        }
        return (increase || decrease);
    }
};
