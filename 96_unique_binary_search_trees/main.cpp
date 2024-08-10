class Solution {
public:
    int numTrees(int n) {
        std::vector< int > vec(n + 1, 0);
        vec[0] = 1;
        vec[1] = 1;
        for (size_t i = 2; i <= n; ++i)
        {
            for (size_t j = 1; j <= i; ++j)
            {
                vec[i] += vec[j - 1] * vec[i - j];
            }
        }
        return vec[n];
    }
};
