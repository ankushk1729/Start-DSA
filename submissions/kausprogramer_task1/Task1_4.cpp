class Solution {
public:
    int mySqrt(int n) {
        long int x = n, y = 1;
        while(x - y > 0)
        {
            x = (x + y)/2;
            y = n/x;
        }
        return x;
    }
};