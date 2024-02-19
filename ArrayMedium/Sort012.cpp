// dutch national flag algorithm

#include<bits/stdc++.h>
using namespace std;

void sort012(vector<int> &v){
    int size = v.size();
    int low = 0;
    int mid = 0;
    int high = size-1;

    while(mid<=high){
        if(v[mid] == 0){
            swap(v[low],v[mid]);
            low++;
            mid++;
        }else if(v[mid] == 1){
            mid++;
        }else{
            swap(v[mid],v[high]);
            high--;
        }
    }
}

int main(){
    vector<int> v = {1,1,0,2,1,0,2,1,0,2};
    sort012(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}