/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        unsigned long long start = 1;
        unsigned long long end = n;
        unsigned long long mid = (start + end) / 2;
        while ((start <= end) && (guess(mid) != 0))
        {
            if (guess(mid) == -1)
            {
                end = mid - 1;
                mid = (start + end) / 2;
            }
            else if (guess(mid) == 1)
            {
                start = mid + 1;
                mid = (start + end) / 2;
            }
        }
        return mid;
    }
};
