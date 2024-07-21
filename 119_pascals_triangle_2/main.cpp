class Solution {
public:
    vector<int> getRow(int rowIndex) {
        std::vector< int > res(1, 1);
        size_t prev = 1;
        for (size_t k = 1; k <= rowIndex; ++k)
        {
            size_t temp = prev * (rowIndex - k + 1) / k;
            res.push_back(temp);
            prev = temp;
        }
        return res;
    }
};
