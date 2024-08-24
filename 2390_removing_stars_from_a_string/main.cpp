class Solution {
public:
    string removeStars(string s) {
        std::stack< char > stack;
        for (size_t i = 0; i < s.size(); ++i)
        {
            if (s[i] == '*')
            {
                stack.pop();
            }
            else
            {
                stack.push(s[i]);
            }
        }
        std::string res = "";
        while (!stack.empty())
        {
            res += stack.top();
            stack.pop();
        }
        std::reverse(res.begin(), res.end());
        return res;
    }
};
