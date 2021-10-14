#include<bits/stdc++.h>
using namespace std;

int sum(vector<int> account)
{
    int sum = 0;
    for (int i = 0; i < account.size(); i++)
    {
        sum += account[i];
    }
    return sum;
}
int maximumWealth(vector<vector<int>> &accounts)
{
    int wealth = 0, currSum = 0;
    for (int i = 0; i < accounts.size(); i++)
    {
        currSum = sum(accounts[i]);
        wealth = max(wealth, currSum);
    }
    return wealth;
}