class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        std::unordered_set< int > set;
        for (const auto & num: arr)
        {
            if ((set.count(num * 2) > 0) || ((num % 2 == 0) && (set.count(num / 2) > 0)))
            {
                return true;
            }
            set.insert(num);
        }
        return false;
    }
};
