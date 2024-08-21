class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        std::string res = "";
        if (str1 + str2 != str2 + str1)
        {
            return res;
        }
        else
        {
            return str1.substr(0, std::gcd(str1.size(), str2.size()));
        }
    }
};
