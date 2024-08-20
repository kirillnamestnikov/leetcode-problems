class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        size_t n = nums.size();
        double sum = 0.0;
        for (size_t i = 0; i < k; ++i)
        {
            sum += nums[i];
        }
        double ans = sum;
        for (size_t i = k; i < n; ++i)
        {
            sum = sum - nums[i - k] + nums[i];
            ans = std::max(ans, sum);
        }
        return ans / k;
    }
};
