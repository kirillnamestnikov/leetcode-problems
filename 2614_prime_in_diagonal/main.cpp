class Solution {
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int res = 0;
        size_t n = nums.size();
        for (size_t i = 0; i < n; ++i)
        {
            for (size_t j = 0; j < n; ++j)
            {
                if ((i == j) && (isPrime(nums[i][j])))
                {
                    res = std::max(res, nums[i][j]);
                }
                if ((j == n - i - 1) && (isPrime(nums[i][j])))
                {
                    res = std::max(res, nums[i][j]);
                }
            }
        }
        return res;        
    }
private:
    bool isPrime(int n)
    {
        if (n == 1)
        {
            return false;
        }
        for (int i = 2; i * i <= n; ++i)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
};
