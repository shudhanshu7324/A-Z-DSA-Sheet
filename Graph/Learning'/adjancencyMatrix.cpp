#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int ajdMatrix[n+1][n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        ajdMatrix[u][v] = 1;
        ajdMatrix[v][u] = 1;
    }
}