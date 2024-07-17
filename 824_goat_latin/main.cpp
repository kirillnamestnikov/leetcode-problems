class Solution {
public:
    string toGoatLatin(string sentence) {
        std::string aString = "a";
        std::string res = "";
        std::vector< std::string > vec;
        for (size_t i = 0; i < sentence.size(); ++i)
        {
            std::string temp = "";
            while ((i < sentence.size()) && (sentence[i] != ' '))
            {
                temp += sentence[i];
                ++i;
            }
            vec.push_back(temp);
        }
        for (size_t i = 0; i < vec.size() - 1; ++i)
        {
            res += appendWord(vec[i], aString);
            res += " ";
        }
        res += appendWord(vec[vec.size() - 1], aString);
        return res;
    }
private:
    bool isVowel(const std::string & word)
    {
        char ch = std::tolower(word[0]);
        return ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'));
    }
    std::string appendWord(const std::string & word, std::string & aString)
    {
        std::string temp = "";
        if (isVowel(word))
        {
            temp += word;
            temp += "ma";
            temp += aString;
            aString += "a";
        }
        else
        {
            char first = word[0];
            temp += word.substr(1);
            temp += first;
            temp += "ma";
            temp += aString;
            aString += "a";
        }
        return temp;
    }
};
