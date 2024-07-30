class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        std::map< int, int > map;
        std::vector< int > res;
        std::stack< int > stack;
        for (size_t i = 0; i < nums2.size(); ++i)
        {
            while (!stack.empty() && stack.top() < nums2[i])
            {
                map[stack.top()] = nums2[i];
                stack.pop();
            }
            stack.push(nums2[i]);
        }
        for (size_t i = 0; i < nums1.size(); ++i)
        {
            if (map[nums1[i]])
            {
                res.push_back(map[nums1[i]]);
            }
            else
            {
                res.push_back(-1);
            }
        }
        return res;
    }
};
