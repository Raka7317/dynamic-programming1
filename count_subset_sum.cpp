#include<bits/stdc++.h>
using namespace std;


int countsubsetsum(int arr[], int sum,int n ){
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
   
    int  n=4;
    int  arr[]={3,4,5,2};
     int sum=6;
     
     cout<<(countsubsetsum(arr,sum,n));
    
   return 0;
}