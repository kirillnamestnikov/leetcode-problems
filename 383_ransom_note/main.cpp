class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        size_t count = 0;
        if (magazine.size() < ransomNote.size())
        {
            return false;
        }
        std::unordered_map< char, int > map;
        for (const auto & el: magazine)
        {
            ++map[el];
        }
        for (const auto & el: ransomNote)
        {
            if (map[el])
            {
                --map[el];
                ++count;
            }
        }
        return (count == ransomNote.size());
    }
};
