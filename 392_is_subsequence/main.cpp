class Solution {
public:
    bool isSubsequence(string s, string t) {
        size_t count = 0;
        if (s.size() > t.size())
        {
            return false;
        }
        for (size_t i = 0; i < t.size(); ++i)
        {
            if (t[i] == s[count])
            {
                ++count;
            }
        }
        return (count == s.size());
    }
};
