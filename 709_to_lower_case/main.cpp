class Solution {
public:
    string toLowerCase(string s) {
        std::string res = "";
        for (const auto & el: s)
        {
            res.push_back(std::tolower(el));
        }
        return res;
    }
};
