class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        std::unordered_map< std::string, int > map;
        for (const auto & el: arr)
        {
            ++map[el];
        }
        for (const auto & el: arr)
        {
            if (map[el] == 1)
            {
                --k;
            }
            if (k == 0)
            {
                return el;
            }
        }
        return "";
    }
};
