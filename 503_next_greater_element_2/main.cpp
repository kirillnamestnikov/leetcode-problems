class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        std::vector< int > res(n, -1);
        std::stack< int > stack;
        for (int i = 2 * n - 1; i >= 0; --i)
        {
            while (!stack.empty() && (nums[i % n] >= stack.top()))
            {
                stack.pop();
            }
            if (!stack.empty() && (i < n))
            {
                res[i] = stack.top();
            }
            stack.push(nums[i % n]);
        }
        return res;
    }
};
