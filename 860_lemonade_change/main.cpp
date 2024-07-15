class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fives = 0;
        int tens = 0;
        for (const auto & el: bills)
        {
            if (el == 5)
            {
                ++fives;
            }
            else if (el == 10)
            {
                --fives;
                ++tens;
            }
            else if (tens > 0)
            {
                --tens;
                --fives;
            }
            else
            {
                fives -= 3;
            }
            if (fives < 0)
            {
                return false;
            }
        }
        return true;
    }
};
