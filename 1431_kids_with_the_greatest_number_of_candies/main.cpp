class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        if (candies.empty())
        {
            return {};
        }
        size_t size = candies.size();
        std::vector< bool > res(size, false);
        int max = *std::max_element(candies.begin(), candies.end());
        for (size_t i = 0; i < size; ++i)
        {
            if (candies[i] + extraCandies >= max)
            {
                res[i] = true;
            }
        }
        return res;
    }
};
