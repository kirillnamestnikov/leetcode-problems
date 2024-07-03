class Solution {
public:
    int firstUniqChar(string s) {
        std::unordered_map< char, int > mp;
        for (const auto & el: s)
        {
            ++mp[el];
        }
        for (int i = 0; i < s.size(); ++i)
        {
            if (mp[s[i]] == 1)
            {
                return i;
            }
        }
        return -1;
    }
};
