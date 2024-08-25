class Solution {
public:
    int minDeletions(string s) {
        std::vector< int > freq(26, 0);
        for (const auto & el: s)
        {
            ++freq[el - 'a'];
        }
        int res = 0;
        std::unordered_set< int > set;
        for (size_t i = 0; i < 26; ++i)
        {
            int count = freq[i];
            while ((count > 0) && (set.count(count)))
            {
                --count;
                ++res;
            }
            if (count > 0)
            {
                set.insert(count);
            }
        }
        return res;
    }
};
