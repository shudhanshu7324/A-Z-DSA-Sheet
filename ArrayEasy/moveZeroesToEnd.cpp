#include <bits/stdc++.h>
using namespace std;

void moveZeroes(int arr[], int n)
{
    int i = 0;
    int j = 1;

    while (j < n)
    {
        if (arr[i] == 0 && arr[j] != 0)
        {
            swap(arr[i], arr[j]);
            i++;
            j++;
        }
        else if (arr[i] != 0 && arr[j] == 0)
        {
            i++;
        }
        else if (arr[i] == 0 && arr[j] == 0)
        {
            j++;
        }
        else
        {
            i++;
            j++;
        }
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 0, 4, 0, 24, 44, 0, 0, 2, 3, 0};
    int n = sizeof(arr) / sizeof(int);
    moveZeroes(arr, n);
    print(arr, n);
}