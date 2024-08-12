class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int height = matrix.size();
        int length = matrix[0].size();
        int left = 0;
        int right = height * length - 1;
        int mid = left + (right - left) / 2;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            int data = matrix[mid / length][mid % length];
            if (data == target)
            {
                return true;
            }
            else if (data < target)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        return false;
    }
};
