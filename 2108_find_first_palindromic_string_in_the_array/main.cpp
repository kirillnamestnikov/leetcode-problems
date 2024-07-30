class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for (const auto & word: words)
        {
            if (isPalindrome(word))
            {
                return word;
            }
        }
        return "";
    }
private:
    bool isPalindrome(const std::string & word)
    {
        int left = 0;
        int right = word.size() - 1;
        while (left < right)
        {
            if (word[left] != word[right])
            {
                return false;
            }
            ++left;
            --right;
        }
        return true;
    }
};
