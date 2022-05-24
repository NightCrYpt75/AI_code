#include<bits/stdc++.h>
using namespace std;
bool solve(int i,bool graph[101][101],int n,int m,vector<int> & color){
   if(i==n){
      for(int z=0;z<n;z++){
          cout<<"vertex:"<<z<<" color:"<<color[z]<<endl;
      }

       return true;

   }
   
   for(int k=1;k<=m;k++){
       color[i]=k;
       int t=1;
    for(int j=0;j<n;j++){
     
     if(graph[i][j] && color[i]==color[j]){
         t=0;
         break;
     }   
    }
    if(t){color[i]=k;
     
     if(solve(i+1,graph,n,m,color))return true;
    }
    color[i]=0;
   }
   return false;
    
}
bool graphColoring(bool graph[101][101], int m, int n) {
    vector<int> color(n+1,0);
    
    return solve(0,graph,n,m,color);
}
