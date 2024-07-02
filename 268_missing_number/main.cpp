class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = getSum(nums);
        int hasSum = 0;
        auto it = nums.begin();
        auto end = nums.end();
        for (; it != end; ++it)
        {
            hasSum += *it;
        }
        return sum - hasSum;
    }
private:
    int getSum(std::vector< int > & nums)
    {
        return (nums.size() + 0) * (nums.size() + 1) / 2;
    }
};
