class Solution {
public:
    int maxVowels(string s, int k) {
        std::unordered_set< char > set({'a', 'e', 'i', 'o', 'u'});
        int count = 0;
        for (size_t i = 0; i < k; ++i)
        {
            if (set.contains(s[i]))
            {
                ++count;
            }
        }
        size_t size = s.size();
        int res = count;
        for (size_t i = k; i < size; ++i)
        {
            if (set.contains(s[i - k]))
            {
                --count;
            }
            if (set.contains(s[i]))
            {
                ++count;
            }
            res = std::max(res, count);
        }
        return res;
    }
};
