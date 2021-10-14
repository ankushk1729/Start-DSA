#include<bits/stdc++.h>
using namespace std;
//Using Binary Search Solution for this problem Time Complexity O(Log n)
int mySqrt(int x)
{
    long long int l = 1, h = x;
    long long int ans = 0;
    while (l <= h)
    {
        long long int mid = (l + h) / 2;
        long long int midP = mid * mid;
        if (midP == x)
        {
            return (int)mid;
        }
        else if (midP > x)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
            ans = mid;
        }
    }
    return (int)ans;
}