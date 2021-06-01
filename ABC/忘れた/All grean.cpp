#include<bits/stdc++.h>
using namespace std;
int p[10],c[10],dp[1001],d,g;
int main(){

  cin>>d>>g;
  for(int i=0;i<d;i++){
    cin>>p[i]>>c[i];
  }
  for(int i=0;i<d;i++){
    for(int k=1000;k>=1;k--){
      for(int j=1;j<=p[i]&&j<=k;j++){
        dp[k]=max(dp[k],dp[k-j]+j*100*(i+1)+(j==p[i]?c[i]:0));
      }
    }
  }
  for(int i=0;i<=1000;i++){
    if(dp[i]>=g){cout<<i<<endl;return 0;}
  }
}
