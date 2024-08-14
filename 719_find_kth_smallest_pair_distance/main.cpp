class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        std::sort(nums.begin(), nums.end());
        int m = nums.back();
        int l = 0, r = m;
        while (l < r)
        {
            int mid = (r + l) / 2;
            if (getCount(mid, nums) < k)
            {
                l = mid + 1;
            }
            else
            {
                r = mid;
            }
        }
        return l;
    }
private:
    int getCount(int x, std::vector< int > & nums)
    {
        int n = nums.size();
        int res = 0;
        for (int l = 0, r = 1; r < n; ++r)
        {
            while (r > l && nums[r] - nums[l] > x)
            {
                ++l;
            }
            res += r - l;
        }
        return res;
    }
};
