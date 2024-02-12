#include<bits/stdc++.h>
using namespace std;

bool isSortedRotated(int arr[],int n){
    int count = 0;

    if(arr[n-1]>arr[0]){
        count++;
    }

    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            count++;
        }
    }

    if(count>1){
        return false;
    }else{
        return true;
    }
}