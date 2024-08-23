class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = std::accumulate(nums.begin(), nums.end(), 0);
        for (int i = 1; i < nums.size(); ++i)
        {
            nums[i] = nums[i - 1] + nums[i];
        }
        for (int i = 0; i < nums.size(); ++i)
        {
            int left = (i == 0) ? 0 : nums[i - 1];
            int right = sum - nums[i];
            if (left == right)
            {
                return i;
            }
        }
        return -1;
    }
};
