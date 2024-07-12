class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        std::vector< int > first;
        std::vector< int > second;
        for (const auto & el: nums)
        {
            (el % 2 == 0) ? second.push_back(el) : first.push_back(el);
        }
        int f = 0, s = 0;
        std::vector< int > res;
        for (size_t i = 0; i < nums.size(); ++i)
        {
            (i % 2 == 0) ? res.push_back(second[s++]) : res.push_back(first[f++]);
        }
        return res;
    }
};
