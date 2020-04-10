/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        if (guess(n) == 0) return n;
        int left = 1, right = n;
        while (left < right) {
        	int mid = left + (right - left) / 2, t = guess(mid);
        	if (t == 0) return mid;
        	if (t == 1) left = mid + 1;
        	else right = mid;
        }
        return left;
    }
};