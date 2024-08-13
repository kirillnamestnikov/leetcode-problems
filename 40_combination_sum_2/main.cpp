class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        std::sort(candidates.begin(), candidates.end());
        std::vector< std::vector< int > > ans;
        std::vector< int > ds;
        getComb(0, target, candidates, ans, ds);
        return ans;
    }
private:
    void getComb(int index, int target, std::vector< int > & arr, std::vector< std::vector< int > > & ans, std::vector< int > & ds)
    {
        if (target == 0)
        {
            ans.push_back(ds);
            return;
        }
        for (int i = index; i < arr.size(); ++i)
        {
            if ((i > index) && (arr[i] == arr[i - 1]))
            {
                continue;
            }
            if (arr[i] > target)
            {
                break;
            }
            ds.push_back(arr[i]);
            getComb(i + 1, target - arr[i], arr, ans, ds);
            ds.pop_back();
        }
    }
};
