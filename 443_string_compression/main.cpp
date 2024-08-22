class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int j = 0;
        while (j < chars.size())
        {
            int count = 0;
            char el = chars[j];
            while ((j < chars.size()) && (chars[j] == el))
            {
                ++j;
                ++count;
            }
            chars[i++] = el;
            if (count > 1)
            {
                for (const auto & el: std::to_string(count))
                {
                    chars[i++] = el;
                }
            }
        }
        return i;
    }
};
