class Solution {
public:
    string reverseVowels(string s) {
        std::string res = s;
        int start = 0;
        int end = s.size() - 1;
        std::unordered_set< char > set({'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'});
        while (start < end)
        {
            while ((start < end) && (!set.contains(res[start])))
            {
                ++start;
            }
            while ((start < end) && (!set.contains(res[end])))
            {
                --end;
            }
            std::swap(res[start], res[end]);
            ++start;
            --end;
        }
        return res;
    }
};
