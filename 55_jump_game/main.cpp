class Solution {
public:
    bool canJump(vector<int>& nums) {
        size_t maxIndex = 0;
        for (size_t i = 0; i < nums.size(); ++i)
        {
            if (i > maxIndex)
            {
                return false;
            }
            maxIndex = std::max(maxIndex, i + nums[i]);
        }
        return true;
    }
};
