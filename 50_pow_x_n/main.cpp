class Solution {
public:
    double myPow(double x, int n) {
        if (n < 0)
        {
            x = 1 / x;
        }
        double power = x;
        double result = 1.0;
        while (n != 0)
        {
            if (n % 2 != 0)
            {
                result *= power;
                if (n > 0)
                {
                    n -= 1;
                }
                else
                {
                    n += 1;
                }
            }
            else
            {
                n /= 2;
                power *= power;
            }
        }
        return result;
    }
};
