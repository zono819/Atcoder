#include<bits/stdc++.h>
using namespace std;
const int MAX = 1e9+5;
signed main(){
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;cin>>n;
  long long ans=0;
  vector<int> a(n),b(n),c(n);
  for(int i=0;i<n;i++){cin>>a[i];}
  for(int i=0;i<n;i++){cin>>b[i];}
  for(int i=0;i<n;i++){cin>>c[i];}
  sort(a.begin(),a.end());
  sort(c.begin(),c.end());
  for(int i=0;i<n;i++){
    auto ita=upper_bound(a.begin(),a.end(),b[i]-1);
    auto itc=upper_bound(c.begin(),c.end(),b[i]);
    ans+=(ita-a.begin())*(c.end()-itc);
  }
  cout<<ans;
}