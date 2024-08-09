class Solution {
public:
    string reverseWords(string s) {
        std::stringstream stream(s);
        std::vector< std::string > words;
        std::string temp;
        while (stream >> temp)
        {
            words.emplace_back(temp);
        }
        std::reverse(words.begin(), words.end());
        std::string res;
        res += words[0];
        for (size_t i = 1; i < words.size(); ++i)
        {
            res += " ";
            res += words[i];
        }
        return res;
    }
};
