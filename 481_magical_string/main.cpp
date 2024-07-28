class Solution {
public:
    int magicalString(int n) {
        std::string s = "122";
        int i = 2;
        while (s.size() < n)
        {
            if (s[i] == '1')
            {
                if (s[s.size() - 1] == '2')
                {
                    s.push_back('1');
                }
                else
                {
                    s.push_back('2');
                }
            }
            else
            {
                if (s[s.size() - 1] == '2')
                {
                    s += "11";
                }
                else
                {
                    s += "22";
                }
            }
            ++i;
        }
        return std::count(s.begin(), s.begin() + n, '1');
    }
};
