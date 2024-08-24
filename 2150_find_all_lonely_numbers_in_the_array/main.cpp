class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        std::vector< int > res;
        for (size_t i = 0; i < nums.size(); ++i)
        {
            bool flag = true;
            if ((i > 0) && ((nums[i] == nums[i - 1]) || (nums[i] == nums[i - 1] + 1)))
            {
                flag = false;
            }
            if ((i < nums.size() - 1) && ((nums[i] == nums[i + 1]) || (nums[i] == nums[i + 1] - 1)))
            {
                flag = false;
            }
            if (flag)
            {
                res.push_back(nums[i]);
            }
        }
        return res;
    }
};
