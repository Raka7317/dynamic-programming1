#include<bits/stdc++.h>
using namespace std;
 
 
int subsetsum(int length[],int price[], int n, int maxsum){
    int t[n+1][maxsum+1];
    for(int i=0;i<n;i++){
        t[i][0]=0;
    }
    for(int i=1;i<n;i++){
        t[0][i]=0;
        }
        
    for(int i=1;i<=n;i++){
        for(int j=1;j<=maxsum;j++){
            if(length[i-1]<=j){
                t[i][j]=max(price[i-1][j]+t[i][j-length[i-1]],t[i-1][j]);
            }
            else{
                t[i][j]=t[i-1][j];
            }
        }
    }
    return[n][maxsum];
    
}

int main(){
   int price[] = { 1, 5, 8, 9, 10, 17, 17, 20 };
    int n = sizeof(price) / sizeof(price[0]);
    int length[n];
    for (int i = 0; i < n; i++) {
        length[i] = i + 1;
    }
    int maxlength = n;
    cout<<subsetsum(price,length,n,maxlength);
    return 0;
}

