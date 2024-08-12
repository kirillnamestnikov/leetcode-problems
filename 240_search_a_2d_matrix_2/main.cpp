class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty())
        {
            return false;
        }
        int height = matrix.size();
        int length = matrix[0].size();
        int i = 0;
        int j = length - 1;
        while ((i < height) && (j >= 0))
        {
            int data = matrix[i][j];
            if (data == target)
            {
                return true;
            }
            if (data < target)
            {
                ++i;
            }
            else
            {
                --j;
            }
        }
        return false;
    }
};
