#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m=0;
  cin>>n;
  string ans="Yes";
  vector<int> c(n);
  for(int i=0;i<n;i++){
    cin>>c[i];
    if(m-c[i]>=2){cout<<"No";return 0;}
    m=max(m,c[i]);
  }
  cout<<ans;
}
