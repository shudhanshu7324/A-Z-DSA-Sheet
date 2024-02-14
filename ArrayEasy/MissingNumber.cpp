#include <bits/stdc++.h>
using namespace std;

int missingNumber(int arr[], int n)
{
    int i=0;
    while(i<n){
        int correct = arr[i];
        if(arr[i] != arr[correct]){
            swap(arr[i],arr[correct]);
        }else{
            i++;
        }
    }

    for(int i=0;i<n;i++){
        if(arr[i] != i){
            return i;
        }else{
            
        }
    }

    return n;
}

int main()
{
    int arr[] = {9,6,4,2,3,5,7,0,1};
    int size = sizeof(arr)/sizeof(int);
    int ans = missingNumber(arr,size);
    cout<<ans;
}