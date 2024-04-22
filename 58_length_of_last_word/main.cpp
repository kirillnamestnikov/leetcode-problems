class Solution {
public:
    int lengthOfLastWord(string s) {
        size_t ansLength = 0;
        size_t curLength = 0;
        for (size_t i = 0; i < s.size(); ++i)
        {
            if (!std::isspace(s[i]))
            {
                ++curLength;
            }
            else
            {
                if (curLength != 0)
                {
                    ansLength = curLength;
                    curLength = 0;
                }
            }
        }
        if (curLength != 0)
        {
            ansLength = curLength;
            curLength = 0;
        }
        return ansLength;
    }
};
