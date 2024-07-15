class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int size = image.size();
        for (int i = 0; i < size; ++i)
        {
            std::reverse(image[i].begin(), image[i].end());
            std::replace(image[i].begin(), image[i].end(), 1, 2);
            std::replace(image[i].begin(), image[i].end(), 0, 1);
            std::replace(image[i].begin(), image[i].end(), 2, 0);
        }
        return image;
    }
};
