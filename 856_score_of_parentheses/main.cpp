class Solution {
public:
    int scoreOfParentheses(string s) {
        int score = 0;
        std::stack< int > processStack;
        for (size_t i = 0; i < s.size(); ++i)
        {
            if (s[i] == '(')
            {
                processStack.push(score);
                score = 0;
            }
            else
            {
                score = processStack.top() + std::max(score * 2, 1);
                processStack.pop();
            }
        }
        return score;
    }
};
