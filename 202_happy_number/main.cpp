class Solution {
public:
    bool isHappy(int n) {
        std::unordered_set< int > s;
        while (true)
        {
            int sum = 0;
            while (n > 0)
            {
                int digit = n % 10;
                sum += digit * digit;
                n /= 10;
            }
            if (s.find(sum) != s.end())
            {
                return false;
            }
            if (sum == 1)
            {
                return true;
            }
            s.insert(sum);
            n = sum;
        }
    }
};
