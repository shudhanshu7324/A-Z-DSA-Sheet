#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[],int n){
    bool sorted = true;
    for(int i=1;i<n;i++){
        if(arr[i-1]<=arr[i]){
            continue;
        }else{
            sorted = false;
            break;
        }
    }
    return sorted;
}

int main(){
    
}