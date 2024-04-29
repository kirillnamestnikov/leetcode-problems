class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::set< int > container;
        for (size_t i = 0; i < nums.size(); ++i)
        {
            if (container.contains(nums[i]))
            {
                return true;
            }
            container.emplace(nums[i]);
        }
        return false;
    }
};
