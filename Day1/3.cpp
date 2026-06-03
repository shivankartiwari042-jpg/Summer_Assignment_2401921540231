#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& prices)
{
    int mini=prices[0];
    int profit=0;

    for(int i=1;i<prices.size();i++)
    {
        if(prices[i]<mini)
        {
            mini=prices[i];
        }

        int currProfit=prices[i]-mini;

        if(currProfit>profit)
        {
            profit=currProfit;
        }
    }

    return profit;
}

int main()
{
    vector<int> prices={7,1,5,3,6,4};

    cout<<maxProfit(prices);

    return 0;
}