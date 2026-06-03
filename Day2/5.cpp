#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

bool containsDuplicate(vector<int>& nums)
{
    unordered_set<int> st;

    for(int i=0;i<nums.size();i++)
    {
        if(st.find(nums[i])!=st.end())
        {
            return true;
        }

        st.insert(nums[i]);
    }

    return false;
}

int main()
{
    vector<int> nums={1,2,3,1};

    cout<<containsDuplicate(nums);

    return 0;
}