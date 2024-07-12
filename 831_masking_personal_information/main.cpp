class Solution {
public:
    string maskPII(string s) {
        for (int i = 0; i < s.size(); ++i)
        {
            s[i] = std::tolower(s[i]);
        }
        std::string mask = "";
        std::string lastDigits = "";
        if (std::find(s.begin(), s.end(), '@') == std::end(s))
        {
            int count = 0;
            for (const auto & el: s)
            {
                if (std::isdigit(el))
                {
                    ++count;
                }
            }
            if (count - 10 == 0)
            {
                mask += "***-***-";
            }
            else if (count - 10 == 1)
            {
                mask += "+*-***-***-";
            }
            else if (count - 10 == 2)
            {
                mask += "+**-***-***-";
            }
            else
            {
                mask += "+***-***-***-";
            }
            for (int i = s.size() - 1; i >= 0; --i)
            {
                if (std::isdigit(s[i]))
                {
                    lastDigits += s[i];
                }
                if (lastDigits.size() == 4)
                {
                    break;
                }
            }
            std::reverse(lastDigits.begin(), lastDigits.end());
            return mask + lastDigits;
        }
        else
        {
            auto it = s.find("@");
            mask = mask + s[0] + "*****" + s.substr(it - 1);
            return mask;
        }
    }
};
