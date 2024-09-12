class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        std::unordered_set< char > set(allowed.begin(), allowed.end());
        size_t res = 0;
        for (size_t i = 0; i < words.size(); ++i)
        {
            ++res;
            std::unordered_set< char > word(words[i].begin(), words[i].end());
            for (const auto & el: word)
            {
                if (!set.contains(el))
                {
                    --res;
                    break;
                }
            }
        }
        return res;
    }
};
