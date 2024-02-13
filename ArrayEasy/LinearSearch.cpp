#include<bits/stdc++.h>
using namespace std;

bool isPresent(int arr[],int n,int key){

    bool found = false;

    for(int i=0;i<n;i++){
        if(arr[i] == key){
            found = true;
            break;
        }
    }

    return found;
}

int main(){
    
}