class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        if (nums.empty())
        {
            return {};
        }
        size_t size = nums.size();
        std::vector< int > res(size, 0);
        res[0] = nums[0];
        for (size_t i = 1; i < size; ++i)
        {
            res[i] = res[i - 1] + nums[i];
        }
        return res;
    }
};
