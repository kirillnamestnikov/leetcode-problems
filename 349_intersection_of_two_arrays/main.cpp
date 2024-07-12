class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        std::vector< int > res;
        std::unordered_set< int > set1(nums1.begin(), nums1.end());
        std::unordered_set< int > set2(nums2.begin(), nums2.end());
        for (const auto & el: set1)
        {
            if (set2.find(el) != set2.end())
            {
                res.push_back(el);
            }
        }
        return res;
    }
};
