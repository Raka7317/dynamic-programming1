#include<bits/stdc++.h>
using namespace std;
 
 
int subsetsum(int coin[],int n,int sum){
    int t[n+1][sum+1];
    int j;
    
    for(int i=1;i<n;i++){
        t[i][0]=0;
    }
    for(int i=1;i<n;i++){
        t[0][i]=INT_MAX;
        }
    for(int i=2; j<=sum;j++){
        if(j%coin[i]==0){
            t[i][j]=j/coin[i];
        }
        else{
            t[i][j]=INT_MAX;
        }
    }
        
    for(int i=2;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(coin[i-1]<=j){
                t[i][j]=min(t[i][j-coin[i-1]]+1,t[i-1][j]);
            }
            else{
                t[i][j]=t[i-1][j];
            }
        }
    }
    return[n][sum];
    
}

int main(){
   int coin[] = { 1, 2,3 };
    int n = sizeof(coin) / sizeof(coin[0]);
    int sum=4;
    cout<<subsetsum(coin,n,sum);
    return 0;
}


