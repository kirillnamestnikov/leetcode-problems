class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        std::unordered_set< char > jewelsSet(jewels.begin(), jewels.end());
        int count = 0;
        for (const auto & el: stones)
        {
            if (jewelsSet.contains(el))
            {
                ++count;
            }
        }
        return count;
    }
};
