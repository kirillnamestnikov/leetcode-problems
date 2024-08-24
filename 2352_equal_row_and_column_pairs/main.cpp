class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int count = 0;
        std::set< std::vector< int > > res;
        std::unordered_map< int, std::vector< int > > map;
        for (int i = 0; i < grid.size(); ++i)
        {
            if (res.find(grid[i]) != res.end())
            {
                map[i] = grid[i];
            }
            res.insert(grid[i]);
        }
        for (int i = 0; i < grid.size(); ++i)
        {
            std::vector< int > temp;
            for (int j = 0; j < grid.size(); ++j)
            {
                temp.push_back(grid[j][i]);
            }
            if (res.find(temp) != res.end())
            {
                ++count;
                for (const auto & it: map)
                {
                    if (it.second == temp)
                    {
                        ++count;
                    }
                }
            }
        }
        return count;
    }
};
