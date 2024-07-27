class Solution {
public:
    int longestPalindrome(string s) {
        std::unordered_map< char, int > countMap;
        for (const auto & ch: s)
        {
            countMap[ch]++;
        }
        int count = 0;
        bool flag = false;
        for (const auto & it: countMap)
        {
            if (it.second % 2 == 0)
            {
                count += it.second;
            }
            else
            {
                count += it.second - 1;
                flag = true;
            }
        }
        if (flag)
        {
            ++count;
        }
        return count;
    }
};
