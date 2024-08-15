class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        std::sort(nums.begin(), nums.end());
        int res = 0;
        int left = 0;
        int right = nums.size() - 1;
        while (left < right)
        {
            if (nums[left] + nums[right] < target)
            {
                res += (right - left);
                ++left;
            }
            else
            {
                --right;
            }
        }
        return res;
    }
};
