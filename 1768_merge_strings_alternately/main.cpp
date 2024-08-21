class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        auto firstArr = word1.c_str();
        auto secondArr = word2.c_str();
        std::string res = "";
        while (*firstArr || *secondArr)
        {
            if (*firstArr)
            {
                res += *firstArr;
                ++firstArr;
            }
            if (*secondArr)
            {
                res += *secondArr;
                ++secondArr;
            }
        }
        return res;
    }
};
