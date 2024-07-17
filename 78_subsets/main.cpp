class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        std::vector< std::vector< int > > powerSet = {{}};
        for (const auto & num: nums)
        {
            int size = powerSet.size();
            for (int i = 0; i < size; ++i)
            {
                std::vector< int > set = powerSet[i];
                set.push_back(num);
                powerSet.push_back(set);
            }
        }
        return powerSet;
    }
};
