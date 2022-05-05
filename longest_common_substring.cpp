#include<bits/stdc++.h>
using namespace std;

int longestsubstring(string x , string y , int m, int n){
    int t[m+1][n+1];
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==0||j==0){
                t[i][j]==0;
            }
        }
    }
    for(int i=1;i<m+1;i++){
        for(int j=1;j<n+1;j++){
            if(x[i-1]==y[j-1]){
                t[i][j]=1+t[i-1][j-1];
            }
            else{
                t[i][j]=0;
            }
        }
    }
  
    
   return t[m][n]; 
}


int main(){
    string X = "AGGTAB";
    string Y = "GXTXAYB";
     
    int m = X.size();
    int n = Y.size();
    
    
    cout<<"Length of LCS is "<< longestsubsequence( X, Y, m, n ) ;
     
    return 0;
}