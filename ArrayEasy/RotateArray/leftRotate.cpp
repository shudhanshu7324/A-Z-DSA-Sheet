
#include<bits/stdc++.h>
using namespace std;

void leftRotate(int arr[],int n){
    int temp = arr[0];
    for(int i=1;i<n;i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}

int main(){
    int arr[] = {3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(int);
    leftRotate(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}