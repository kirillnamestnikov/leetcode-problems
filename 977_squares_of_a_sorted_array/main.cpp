class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        std::vector< int > res(nums.size(), 0);
        int left = 0;
        int right = nums.size() - 1;
        for (int i = nums.size() - 1; i >= 0; --i)
        {
            if (std::abs(nums[left]) > std::abs(nums[right]))
            {
                res[i] = nums[left] * nums[left];
                ++left;
            }
            else
            {
                res[i] = nums[right] * nums[right];
                --right;
            }
        }
        return res;
    }
};
