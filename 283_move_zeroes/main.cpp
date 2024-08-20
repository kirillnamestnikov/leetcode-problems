class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0;
        int right = 0;
        for (; right < nums.size(); ++right)
        {
            if (nums[right] != 0)
            {
                std::swap(nums[right], nums[left]);
                ++left;
            }
        }
    }
};
