#include<iostream>
#include<vector>
using namespace std;

vector<int> sortedSquares(vector<int>& nums)
{
    int n=nums.size();

    vector<int> ans(n);

    int l=0;
    int r=n-1;
    int i=n-1;

    while(l<=r)
    {
        if(nums[l]*nums[l]>nums[r]*nums[r])
        {
            ans[i]=nums[l]*nums[l];
            l++;
        }
        else
        {
            ans[i]=nums[r]*nums[r];
            r--;
        }

        i--;
    }

    return ans;
}

int main()
{
    vector<int> nums={-4,-1,0,3,10};

    vector<int> ans=sortedSquares(nums);

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}