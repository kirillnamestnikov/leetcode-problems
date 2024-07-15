#include <cmath>

class Solution {
public:
    vector<int> constructRectangle(int area) {
        int width = static_cast< int >(std::sqrt(area));
        while (area % width != 0)
        {
            width--;
        }
        int height = area / width;
        return {height, width};
    }
};
