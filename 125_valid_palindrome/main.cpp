class Solution {
public:
    bool isPalindrome(string s) {
        std::string goal = "";
        for (size_t i = 0; i < s.size(); ++i)
        {
            if ((std::isalpha(s[i])) || (std::isdigit(s[i])))
            {
                goal.push_back(std::tolower(s[i]));
            }
        }
        std::cout << goal;
        if ((goal.empty()) || (goal.size() == 1))
        {
            return true;
        }
        size_t size = goal.size() / 2;
        std::string firstPart = "";
        for (size_t i = 0; i < size; ++i)
        {
            firstPart.push_back(goal[i]);
        }
        std::string secondPart = "";
        for (size_t i = goal.size() - 1; i >= size; --i)
        {
            secondPart.push_back(goal[i]);
        }
        if (firstPart == secondPart)
        {
            return true;
        }
        else if (firstPart.push_back(secondPart.back()); firstPart == secondPart)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
