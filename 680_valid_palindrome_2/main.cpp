class Solution {
public:
    bool validPalindrome(string s) {
        size_t i = 0;
        size_t j = s.size() - 1;
        while (i < j)
        {
            if (s[i] == s[j])
            {
                ++i;
                --j;
            }
            else
            {
                return ((isPalindrome(s, i + 1, j)) || (isPalindrome(s, i, j - 1)));
            }
        }
        return true;
    }
private:
    bool isPalindrome(std::string s, size_t i, size_t j)
    {
        while (i < j)
        {
            if (s[i] == s[j])
            {
                ++i;
                --j;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};
