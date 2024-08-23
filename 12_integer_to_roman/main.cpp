class Solution {
public:
    string intToRoman(int num) {
        std::vector< int > numbers({1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1});
        std::vector< std::string > strings({"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"});
        int i = 0;
        std::string res = "";
        while (num > 0)
        {
            if (num >= numbers[i])
            {
                res += strings[i];
                num -= numbers[i];
            }
            else
            {
                ++i;
            }
        }
        return res;
    }
};
