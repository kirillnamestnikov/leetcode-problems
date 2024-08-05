class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        std::vector< int > counting(2 * 50000 + 1, 0);
        for (const auto & num: nums)
        {
            ++counting[num + 50000];
        }
        size_t index = 0;
        for (size_t i = 0; i < counting.size(); ++i)
        {
            int count = counting[i];
            while (count > 0)
            {
                nums[index] = i - 50000;
                ++index;
                --count;
            }
        }
        return nums;
    }
};
