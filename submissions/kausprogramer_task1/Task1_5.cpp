class Solution {
public:
    int guessNumber(int n) {
        if(guess(n)==0)
        {
            return n;
        }
        int low=1, high=n, mid=low+(high-low)/2;
        while(low<=high)
        {
            if(guess(mid)==0)
            {
                return mid;
            }
            else if(guess(mid)==1)
            {
                low=mid+1;
                mid=low+(high-low)/2;
            }
            else if(guess(mid)==-1)
            {
                high=mid-1;
                mid=low+(high-low)/2;
            }
        }
        return 0;
    }
};