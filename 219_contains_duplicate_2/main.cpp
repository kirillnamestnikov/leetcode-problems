class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if (nums.size() <= 1)
        {
            return false;
        }
        std::unordered_map< int, int > map;
        for (size_t i = 0; i < nums.size(); ++i)
        {
            if (map.count(nums[i]))
            {
                if (i - map[nums[i]] <= k)
                {
                    return true;
                }
            }
            map[nums[i]] = i;
        }
        return false;
    }
};
