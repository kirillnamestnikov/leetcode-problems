class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        std::vector< int > res;
        for (size_t i = 0; i < nums.size() / 2; ++i)
        {
            res.push_back(nums[i]);
            res.push_back(nums[i + n]);
        }
        return res;
    }
};
