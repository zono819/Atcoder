#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
  int n,ans=0;
  int sh;
  cin>>n;
  vector<int> l(n);
  for(int i=0;i<n;i++){cin>>l[i];}
  sort(l.begin(),l.end());
  for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
          sh=l[i]+l[j];
          auto it =lower_bound(l.begin(),l.end(),sh);
          ans+=it-l.begin()-j-1;
      }
  }
  cout<<ans;
}
