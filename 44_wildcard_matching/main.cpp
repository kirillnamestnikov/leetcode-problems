class Solution {
public:
    bool isMatch(string s, string p) {
        if ((s.size() != p.size()) && (p.find('*') == p.npos))
        {
            return false;
        }
        size_t i = 0;
        size_t j = 0;
        int starJ = -1;
        int lastI = -1;
        while (i < s.size())
        {
            if (p[j] == '?')
            {
                ++j;
                ++i;
            }
            else if (s[i] == p[j])
            {
                ++i;
                ++j;
            }
            else if (p[j] == '*')
            {
                if (j == p.size() - 1)
                {
                    break;
                }
                starJ = j++;
                lastI = i;
            }
            else if (starJ != -1)
            {
                i = lastI++;
                j = 1 + starJ;
            }
            else
            {
                return false;
            }
        }
        while ((j < p.size()) && (p[j] == '*'))
        {
            ++j;
        }
        return (j == p.size());
    }
};
