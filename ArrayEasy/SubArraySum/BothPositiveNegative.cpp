
#include<bits/stdc++.h>
using namespace std;

int longestSubArrayBothPositiveNegative(int arr[],int n,int k){
    int maxLength = 0;
    long long prefixSum = 0;
    map<long long,int> mp;

    for(int i=0;i<n;i++){
        prefixSum += arr[i];

        if(prefixSum == k){
            maxLength = max(maxLength,i+1);
        }

        int remaining = prefixSum - k;

        if(mp.find(remaining) != mp.end()){
            int length = i-mp[remaining];
            maxLength = max(maxLength,length);
        }

        if(mp.find(prefixSum) == mp.end()){
            mp[prefixSum] = i;
        }
    }

    return maxLength;
}

// timecomplexity = o(n) and space complexity = o(n)