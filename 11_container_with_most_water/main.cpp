class Solution {
public:
    int maxArea(vector<int>& height) {
        size_t maxArea = 0;
        size_t left = 0;
        size_t right = height.size() - 1;
        while (left < right)
        {
            maxArea = std::max(maxArea, (right - left) * std::min(height[left], height[right]));
            if (height[left] < height[right])
            {
                ++left;
            }
            else
            {
                --right;
            }
        }
        return maxArea;
    }
};
