#include<bits/stdc++.h>
using namespace std;

int longestsubsequence(string x , string y , int m, int n){
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
                t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
    }
  
    
   return t[m][n]; 
}


int main(){
    string s = "heap";
    string rev = "";
    
    
    for(int i=s.length()-1; i>=0; i--){
        //concatenate characters to the reverse
        rev = rev + s[i];  
    }
     
    int m = s.size();
    cout<<longestsubsequence(s,rev,m,m);
    
     
    
     
    return 0;
}