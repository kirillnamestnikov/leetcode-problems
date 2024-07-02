class Solution {
public:
    string multiply(string num1, string num2) {
        if ((num1 == "0") || (num2 == "0"))
        {
            return "0";
        }
        std::vector< int > vec(num1.size() + num2.size(), 0);
        for (int i = num1.size() - 1; i >= 0; --i)
        {
            for (int j = num2.size() - 1; j >= 0; --j)
            {
                vec[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
                vec[i + j] += vec[i + j + 1] / 10;
                vec[i + j + 1] %= 10;
            }
        }
        int i = 0;
        while ((i < vec.size()) && (vec[i] == 0))
        {
            ++i;
        }
        std::string resString = "";
        for (; i < vec.size(); ++i)
        {
            resString.push_back(vec[i] + '0');
        }
        return resString;
    }
};
