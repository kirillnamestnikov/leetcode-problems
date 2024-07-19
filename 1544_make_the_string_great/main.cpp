class Solution {
public:
    string makeGood(string s) {
        std::stack< char > stack;
        for (const auto & el: s)
        {
            if ((!stack.empty()) && (std::abs(stack.top() - el) == 32))
            {
                stack.pop();
            }
            else
            {
                stack.push(el);
            }
        }
        std::string res;
        while (!stack.empty())
        {
            res += stack.top();
            stack.pop();
        }
        std::reverse(res.begin(), res.end());
        return res;
    }
};
