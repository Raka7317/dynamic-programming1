#include<bits/stdc++.h>
using namespace std;
 
 
int countsubsetsum(int arr[], int n,int sum ){
     int t[n+1][sum+1];
     
     
    t[0][0]=1;
     
     for(int j=1;j<=sum;j++)
     {
         t[0][j]=0;
     }
     for(int i=1;i<=n;i++){
         for(int j=0;j<=sum;j++){
             if(arr[i-1]<=j){
                 t[i][j]=t[i-1][j]+t[i-1][j-arr[i-1]];
             }
             else{
                 t[i][j]=t[i-1][j];
             }
         }
     }
 return[n][sum];
}
int main(){
    int n=4;
    int arr[]={1, 3, 2, 4} ;
    int diff=2;
    int range=0;
    for(int i=0;i<n;i++){
        range+=arr[i];
    }
    int s1=(range+diff)/2;
    int count=countsubsetsum(arr,n,s1);
    cout<<count;
    
    return 0;
}

