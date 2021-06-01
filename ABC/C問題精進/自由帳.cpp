#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main(){
  long long n,m,ans;
  cin>>n>>m;
  ans=(n<m/2?n+(m-2*n)/4:m/2);
  cout<<ans;
}