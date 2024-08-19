class Solution {
public:
    int minSteps(int n) {
        if (n == 1)
        {
            return 0;
        }
        int res = 0;
        int factor = 2;
        while (n > 1)
        {
            while (n % factor == 0)
            {
                res += factor;
                n /= factor;
            }
            ++factor;
        }
        return res;
    }
};
