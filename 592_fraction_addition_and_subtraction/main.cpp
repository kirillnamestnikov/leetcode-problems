class Solution {
public:
    string fractionAddition(string expression) {
        int numerator = 0;
        int denominator = 1;
        int i = 0;
        int n = expression.size();
        while (i < n)
        {
            char sign = 1;
            if ((expression[i] == '+') || (expression[i] == '-'))
            {
                (expression[i] == '-') ? (sign = -1) : (sign = 1);
                ++i;
            }
            int num = 0;
            while ((i < n) && std::isdigit(expression[i]))
            {
                num = num * 10 + (expression[i] - '0');
                ++i;
            }
            num *= sign;
            ++i;
            int den = 0;
            while ((i < n) && std::isdigit(expression[i]))
            {
                den = den * 10 + (expression[i] - '0');
                ++i;
            }
            numerator = numerator * den + num * denominator;
            denominator *= den;
            int gcdNum = std::gcd(std::abs(numerator), denominator);
            numerator /= gcdNum;
            denominator /= gcdNum;
        }
        return std::to_string(numerator) + "/" + std::to_string(denominator);
    }
};
