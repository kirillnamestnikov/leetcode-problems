class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        std::vector< int > temp(nums.begin(), nums.end());
        size_t size = nums.size();
        for (size_t i = 0; i < size; ++i)
        {
            nums[(i + k) % size] = temp[i];
        }
    }
};
