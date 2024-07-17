class Solution {
public:
    string removeKdigits(string num, int k) {
        std::stack< char > stack;
        for (const auto & digit: num)
        {
            while (!stack.empty() && (k > 0) && (stack.top() > digit))
            {
                stack.pop();
                --k;
            }
            stack.push(digit);
        }
        while ((k > 0) && !stack.empty())
        {
            stack.pop();
            --k;
        }
        std::string res = "";
        while (!stack.empty())
        {
            res += stack.top();
            stack.pop();
        }
        std::reverse(res.begin(), res.end());
        size_t pos = res.find_first_not_of('0');
        if (pos == std::string::npos)
        {
            res = "0";
        }
        else
        {
            res = res.substr(pos);
        }
        return res;
    }
};
