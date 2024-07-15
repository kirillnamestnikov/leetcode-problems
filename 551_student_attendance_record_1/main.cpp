class Solution {
public:
    bool checkRecord(string s) {
        int absentCount = 0;
        int lateCount = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            if ((absentCount >= 2) || (lateCount >= 3))
            {
                return false;
            }
            if (s[i] != 'L')
            {
                lateCount = 0;
            }
            else
            {
                ++lateCount;
            }
            if (s[i] == 'A')
            {
                ++absentCount;
            }
        }
        return ((lateCount < 3) && (absentCount < 2));
    }
};
