class Solution {
public:
    string numberToWords(int num) {
        if (num == 0)
        {
            return "Zero";
        }
        std::string ans = "";
        int count = 0;
        while (num > 0)
        {
            auto [q, r] = std::div(num, 1000);
            num = q;
            if (r > 0)
            {
                std::string part = toEnglish(r) + " " + eng3[count];
                (ans.empty()) ? ans = part : ans = part + " " + ans;
            }
            ++count;
        }
        if (!ans.empty() && ans.back() == ' ')
        {
            ans.pop_back();
        }
        return ans;
    }
private:
std::vector< std::string > eng = {"", "One", "Two", "Three",
"Four", "Five", "Six", "Seven", "Eight", "Nine",
"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen",
"Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
std::vector< std::string > eng2 = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
std::vector< std::string > eng3 = {"", "Thousand", "Million", "Billion"};
    std::string toEnglish(int num)
    {
        std::string ans = "";
        if (num >= 100)
        {
            auto [q, r] = std::div(num, 100);
            ans += eng[q] + " Hundred ";
            num = r;
        }
        if (num >= 20)
        {
            auto [q, r] = std::div(num, 10);
            ans += eng2[q];
            if (r > 0)
            {
                ans += " " + eng[r];
            }
        }
        else if (num > 0)
        {
            ans += eng[num];
        }
        if (!ans.empty() && ans.back() == ' ')
        {
            ans.pop_back();
        }
        return ans;
    }
};
