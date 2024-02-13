#include<bits/stdc++.h>
using namespace std;

    int remove_duplicate(int arr[],int n){
        // code here
        int i=0;
        for(int j=1;j<n;j++){
            if(arr[j] != arr[i]){
                arr[i+1] = arr[j];
                i++;
            }
        }
        return i+1;
    }

    int main(){
        
    }