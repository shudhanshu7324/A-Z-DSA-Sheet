#include <bits/stdc++.h>
using namespace std;

int majorityElement(int arr[], int n)
{
    unordered_map<int, int> mpp;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    for (auto it : mpp)
    {
        if (it.second > n / 2)
        {
            return it.first;
        }
    }

    return ans;
}

int main()
{
    int arr[] = {1,2,3};
    int n = 3;
    cout<<majorityElement(arr,n)<<endl;
}