struct Node
{
    std::string name;
    int height;
};

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        std::vector< Node > vec;
        for (size_t i = 0; i < names.size(); ++i)
        {
            vec.push_back({names[i], heights[i]});
        }
        std::sort(vec.begin(), vec.end(), [](const Node & a, const Node & b){
            return a.height > b.height;
        });
        std::vector< std::string > res;
        for (size_t i = 0; i < vec.size(); ++i)
        {
            res.push_back(vec[i].name);
        }
        return res;
    }
};
