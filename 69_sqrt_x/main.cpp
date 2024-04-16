class Solution {
public:
    int mySqrt(int x) {
        unsigned long long l = 0, r = x;
        unsigned long long ans = -1;
        unsigned long long mid = 0;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (mid * mid <= x)
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        return ans;
    }
};
