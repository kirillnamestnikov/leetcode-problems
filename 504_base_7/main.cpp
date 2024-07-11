class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0)
        {
            return "0";
        }
        std::string res;
        bool needSign = (num < 0);
        num = std::abs(num);
        while (num > 0)
        {
            res += num % 7 + '0';
            num /= 7;
        }
        if (needSign)
        {
            res += '-';
        }
        std::reverse(res.begin(), res.end());
        return res;
    }
};
