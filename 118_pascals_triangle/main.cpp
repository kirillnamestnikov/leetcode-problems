class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if (numRows == 0)
        {
            return {};
        }
        else if (numRows == 1)
        {
            return {{1}};
        }
        else
        {
            std::vector< std::vector< int > > res = generate(numRows - 1);
            std::vector< int > temp(numRows, 1);
            for (int i = 1; i < numRows - 1; ++i)
            {
                temp[i] = res.back()[i - 1] + res.back()[i];
            }
            res.push_back(temp);
            return res;

        }
    }
};
