#include<bits/stdc++.h>
using namespace std;

bool subsetsum(int arr[], int sum,int n ){
     int t[n+1][sum+1];
     
     
     for(int i=0;i<=n;i++)
     {
         t[i][0]=true;
     }
     for(int j=1;j<=sum;j++)
     {
         t[0][j]=false;
     }
     for(int i=0;i<=n;i++){
         for(int j=0;j<=sum;j++){
             if(arr[i-1]<j){
                 t[i][j]=t[i-1][j]||t[i-1][j-arr[i-1]];
             }
             else{
                 t[i][j]=t[i-1][j];
             }
         }
     }
     return t[n][sum];
}



int main(){
    
    int  n=4;
    int  arr[]={3,4,5,2};
     int sum=6;
   if( subsetsum(arr,sum,n)==true){
       cout<<"there is subset  sum";
   }
   else{
       cout<<"there is not subset sum";
   }
   return 0;
}