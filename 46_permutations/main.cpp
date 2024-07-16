class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        std::vector< std::vector< int > > res;
        std::sort(nums.begin(), nums.end());
        do
        {
            res.push_back(nums);
        }
        while (std::next_permutation(nums.begin(), nums.end()));
        return res;
    }
};
