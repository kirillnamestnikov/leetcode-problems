class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        std::unordered_set< int > set1(nums1.begin(), nums1.end());
        std::unordered_set< int > set2(nums2.begin(), nums2.end());
        std::vector< int > first;
        for (const auto & el: set1)
        {
            if (!set2.contains(el))
            {
                first.push_back(el);
            }
        }
        std::vector< int > second;
        for (const auto & el: set2)
        {
            if (!set1.contains(el))
            {
                second.push_back(el);
            }
        }
        return {first, second};
    }
};
