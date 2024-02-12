#include<bits/stdc++.h>
using namespace std;


// using sorting in array with non repeating characters
// int secondLargest(int arr[],int n){
//     sort(arr,arr+n);
//     return arr[n-2];
// }

// int secondLargest(int arr[],int n){
//     sort(arr,arr+n);
//     for(int i=n-1;i>=0;i--){
//         if(arr[i-1] != arr[i]){
//             return arr[i-1];
//         }
//     }
//     return -1;
// }


// using linear time for loop

int secondLargest(int arr[],int  n){
    int max = INT_MIN;
    int secondMax = INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]>max){
            secondMax = max;
            max = arr[i];
        }else if(arr[i] > secondMax && arr[i]!=max){
            secondMax = arr[i];
        }
    }


    if(secondMax == INT_MIN){
        return -1;
    }

    return secondMax;
}





int main(){

}