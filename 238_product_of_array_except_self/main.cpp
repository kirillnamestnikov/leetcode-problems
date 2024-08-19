class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        std::vector< int > res(size, 0);
        res[0] = 1;
        for (int i = 1; i < size; ++i)
        {
            res[i] = res[i - 1] * nums[i - 1];
        }
        int factor = 1;
        for (int i = size - 1; i >= 0; --i)
        {
            res[i] *= factor;
            factor *= nums[i];
        }
        return res;
    }
};
