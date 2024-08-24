class Solution {
public:
    bool closeStrings(string word1, string word2) {
        std::vector< int > freq1(26, 0);
        std::vector< int > freq2(26, 0);
        for (const auto & el: word1)
        {
            ++freq1[el - 'a'];
        }
        for (const auto & el: word2)
        {
            ++freq2[el - 'a'];
        }
        for (size_t i = 0; i < 26; ++i)
        {
            if ((freq1[i] != 0 && freq2[i] == 0) || (freq1[i] == 0 && freq2[i] != 0))
            {
                return false;
            }
        }
        std::sort(freq1.begin(), freq1.end());
        std::sort(freq2.begin(), freq2.end());
        for (size_t i = 0; i < 26; ++i)
        {
            if (freq1[i] != freq2[i])
            {
                return false;
            }
        }
        return true;
    }
};
