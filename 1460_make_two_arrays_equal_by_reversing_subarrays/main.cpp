#include <set>

class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        std::unordered_multiset< int > set1(target.begin(), target.end());
        std::unordered_multiset< int > set2(arr.begin(), arr.end());
        return set1 == set2;
    }
};
