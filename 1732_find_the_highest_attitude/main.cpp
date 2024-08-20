class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int curr = 0;
        int res = curr;
        for (size_t i = 0; i < gain.size(); ++i)
        {
            curr += gain[i];
            res = std::max(res, curr);
        }
        return res;
    }
};
