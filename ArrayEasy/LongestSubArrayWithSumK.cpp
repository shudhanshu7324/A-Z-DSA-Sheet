#include<bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int> v,int k){
    int i=0;
    int j=0;
    int maxLength = 0;
    long long sum = v[0];
    int size = v.size();

    while (j<size)
    {
        while (i<=j && sum>k)
        {
            sum -= v[i];
            i++;
        }

        if(sum == k){
            maxLength = max(maxLength,j-i+1);
        }

        j++;
        if(j<size){
            sum += v[j];
        }
        
    }

    return maxLength;
    
}

int main(){

}