#include<bits/stdc++.h>
using namespace std;

void leftRotatebyK(int arr[],int n,int k){
    int temp[n];
    k=k%n;

    for(int i=0;i<n;i++){
        temp[(k+i)%n] = arr[i];
    }

    for(int i=0;i<n;i++){
        arr[i] = temp[i];
    }
}

int main(){
    int arr[] = {3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(int);
    leftRotatebyK(arr,n,3);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}