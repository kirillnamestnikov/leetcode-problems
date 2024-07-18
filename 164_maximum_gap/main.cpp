class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if (nums.size() < 2)
        {
            return 0;
        }
        std::sort(nums.begin(), nums.end());
        std::vector< int > gaps;
        for (size_t i = 1; i < nums.size(); ++i)
        {
            gaps.push_back(nums[i] - nums[i - 1]);
        }
        return *std::max_element(gaps.begin(), gaps.end());
    }
};
