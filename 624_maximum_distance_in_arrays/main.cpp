class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int smallest = arrays[0][0];
        int biggest = arrays[0].back();
        int maxDist = 0;
        for (size_t i = 1; i < arrays.size(); ++i)
        {
            maxDist = std::max(maxDist, std::abs(arrays[i].back() - smallest));
            maxDist = std::max(maxDist, std::abs(biggest - arrays[i][0]));
            smallest = std::min(smallest, arrays[i][0]);
            biggest = std::max(biggest, arrays[i].back());
        }
    return maxDist;
    }
};
