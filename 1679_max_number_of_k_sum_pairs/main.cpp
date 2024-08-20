class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        std::sort(nums.begin(), nums.end());
        int left = 0;
        int right = nums.size() - 1;
        int res = 0;
        while (left < right)
        {
            if (nums[left] + nums[right] < k)
            {
                ++left;
            }
            else if (nums[left] + nums[right] > k)
            {
                --right;
            }
            else
            {
                ++res;
                --right;
                ++left;
            }
        }
        return res;
    }
};
