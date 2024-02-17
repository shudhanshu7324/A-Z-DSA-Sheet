#include <bits/stdc++.h>
using namespace std;

// longest subarray brute force tc(n^3) near about
// int longestSubArray(int arr[], int n, int key)
// {
//     int length = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             int sum = 0;
//             for (int k = i; k <= j; k++)
//             {
//                 sum += arr[k];
//             }
//             if (sum == key)
//                 {
//                     length = max(length, (j - i)+ 1);
//                 }
//         }
//     }
//     return length;
// }

// order of n^2
int longestSubArray(int arr[], int n, int key)
{
    int length = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {

            sum += arr[j];

            if (sum == key)
            {
                length = max(length, (j - i) + 1);
            }
        }
    }
    return length;
}

int main()
{
    int arr[] = {1, 2, 3, 1, 1, 1, 1};
    int n = 7;
    int ans = longestSubArray(arr, n, 3);
    cout << ans;
}