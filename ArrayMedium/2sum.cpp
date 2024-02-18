#include <bits/stdc++.h>
using namespace std;

pair<int, int> twoSum(int arr[], int n, int key)
{
    int num = 0;
    map<int, int> mp;
    pair<int, int> p;
    for (int i = 0; i < n; i++)
    {
        num = arr[i];
        int remaining = key - num;
        if (mp.find(remaining) != mp.end())
        {
            p.first = mp[remaining];
            p.second = i;
            break;
        }
        else
        {
            mp[num] = i;
        }
    }
    return p;
}

int main()
{
    // int arr[4] = {2, 7, 11, 15};
    // int key = 9;
    // pair<int, int> ans = twoSum(arr, 4, 9);
    int arr[3] = {3,2,4};
    pair<int, int> ans = twoSum(arr, 3, 6);
    cout << ans.first << endl;
    cout << ans.second << endl;
}