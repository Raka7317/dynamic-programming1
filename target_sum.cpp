#include<bits/stdc++.h>
using namespace std;
 
 
int subsetsum(int arr[], int n, int sum){
    int t[n+1][sum+1];
    for(int i=0;i<n;i++){
        t[i][0]=true;
    }
    for(int i=1;i<n;i++){
        t[0][i]=false;
        }
        
    for(int i=0;i<=n;i++){
        for(int j=0;j<=sum;j++){
            if(arr[i]<j){
                t[i][j]=t[i-1][j]||t[i-1][j-arr[i-1]];
            }
            else{
                t[i][j]=t[i-1][j];
            }
        }
    }
    vector<int>v;
    for(int i=0;i<sum/2;i++){
        if(t[n-1][i]==true){
            v.push_back(t[n-1][i]);
        }
    }
    int vectorrsum=0;
    for(int i=0;i<v.size();i++){
        vectorrsum+=v[i];
    }
    return vectorrsum;
}

int main(){
    int n=4;
    int arr[]={1, 6, 11, 5} ;
    int range=0;
    for(int i=0;i<n;i++){
        range+=arr[i];
    }
    int s1=subsetsum(arr,n,range);
    int s2=range-(2*s1);
    cout<<s2;
    return 0;
}

