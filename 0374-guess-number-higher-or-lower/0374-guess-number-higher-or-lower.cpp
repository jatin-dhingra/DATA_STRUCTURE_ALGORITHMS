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
    int guessNumber(int n) 
    {
        int s=1;
        int l=n;
        while(s<=l)
        {
            int mid=s+(l-s)/2;
            int ans=guess(mid);
            if(ans==0)
            {
                return mid;
            }
            else if(ans<0)
            {
                l=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }
        return -1;
    }
};