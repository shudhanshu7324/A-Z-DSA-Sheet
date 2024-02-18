#include <bits/stdc++.h>
using namespace std;

int KadanesAlgorithm(int arr[], int n)
{
    long long sum = 0;
    long long maxSum = arr[0];

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        maxSum = max(maxSum, sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }

    return maxSum;
}