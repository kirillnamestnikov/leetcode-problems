class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        std::vector< int > res;
        std::unordered_map< int, int > hashmap;
        for (const auto & el: nums1)
        {
            ++hashmap[el];
        }
        for (const auto & el: nums2)
        {
            if (hashmap[el] != 0)
            {
                res.push_back(el);
                --hashmap[el];
            }
        }
        return res;
    }
};
