#include <bits/stdc++.h>
using namespace std;

// longest subarray brute force tc(n^3) near about
int longestSubArray(int arr[], int n, int key)
{
    int length = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k < j; k++)
            {
                sum += arr[k];
                if (sum == key)
                {
                    length = max(length, j - i + 1);
                }
            }
        }
    }
    return length;
}

int main()
{
}