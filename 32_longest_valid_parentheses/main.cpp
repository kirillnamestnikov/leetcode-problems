class Solution {
public:
    int longestValidParentheses(string s) {
        if (s.size() <= 1)
        {
            return 0;
        }
        int size = s.size();
        std::stack< int > stack;
        stack.push(-1);
        int res = 0;
        for (int i = 0; i < size; ++i)
        {
            if (s[i] == '(')
            {
                stack.push(i);
            }
            else
            {
                stack.pop();
                if (stack.empty())
                {
                    stack.push(i);
                }
                else
                {
                    res = std::max(res, i - stack.top());
                }
            }
        }
        return res;
    }
};
