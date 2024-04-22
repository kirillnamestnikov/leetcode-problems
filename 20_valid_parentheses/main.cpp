class Solution {
public:
    bool isValid(string s) {
        std::stack< char > bracketStack;
        bool check = true;
        if (s.size() % 2 == 1)
        {
            return false;
        }
        for (size_t i = 0; i < s.size(); ++i)
        {
            if ((s[i] == '(') || (s[i] == '{') || (s[i] == '['))
            {
                bracketStack.push(s[i]);
            }
            else
            {
                if (bracketStack.empty())
                {
                    return false;
                }
                if (((bracketStack.top() == '(') && (s[i] == ')')) || ((bracketStack.top() == '[') && (s[i] == ']')) || ((bracketStack.top() == '{') && (s[i] == '}')))
                {
                    check = check && true;
                }
                else
                {
                    check = check && false;
                }
                bracketStack.pop();
            }
        }
        if (!bracketStack.empty())
        {
            return false;
        }
        return check;
    }
};
