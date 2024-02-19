#include<bits/stdc++.h>
using namespace std;

vector<int> leaders(int a[], int n){
        // Code here
        vector<int> ans;
        int maxElement = INT_MIN;
        for(int i=n-1;i>=0;i--){
            if(a[i] >= maxElement){
                ans.insert(ans.begin(),a[i]);
                maxElement = a[i];
            }
        }
        
        return ans;
}

int main(){
    
}