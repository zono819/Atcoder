#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main(){
  int n,ans=-(1<<30),c,d;
  cin>>n;
  int f[n][10],p[n][11];
  rep(i,n){
    rep(j,10){
      cin>>f[i][j];
    }
  }
  rep(i,n){
    rep(j,11){
      cin>>p[i][j];
    }
  }
  for(int b=1;b<1024;b++){
    d=0;
    rep(i,n){
      c=0;
      rep(j,10){
        if((b>>j&1)&&f[i][j]){c++;}
      }
      d+=p[i][c];
    }
    ans=max(d,ans);
  }
  cout<<ans;
}