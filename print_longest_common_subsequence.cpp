#include<bits/stdc++.h>
using namespace std;

string longestsubsequence(string x , string y , int m, int n){
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
  int i=m,j=n;
  string s="";
  while(i>0 && j>0){
      if(x[i-1]==y[j-1]){
          s.push_back(x[i-1]);
          i--;
          j--;
      }
      else{
          if(t[i][j-1]>t[i-1][j]){
             j--;
          }
          else{
              i--;
          }
      }
  }
  reverse(s.begin(),s.end()); 
   
   return s;
}




int main(){
    string X = "AGGTAB";
    string Y = "GXTXAYB";
     
    int m = X.size();
    int n = Y.size();
    
    
    cout<<"Longest common subseqeunce is  "<< longestsubsequence( X, Y, m, n ) ;
     
    return 0;
}