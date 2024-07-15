class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        std::partition(nums.begin(), nums.end(), [](int i){return i % 2 == 0;});
        return nums;
    }
};
