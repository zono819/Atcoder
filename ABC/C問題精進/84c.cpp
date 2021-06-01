#include<bits/stdc++.h>
using namespace std;
int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n,k;cin>>n;
  vector<int> c(n-1),s(n-1),t(n-1);
  for(int i=0;i<n-1;i++){
    cin>>c[i]>>s[i]>>t[i];
  }
  for(int i=0;i<n;i++){
    k=0;
    for(int j=i;j<n-1;j++){
      if(k<s[j]){k=s[j];}
      else if(k%t[j]==0);
      else{k+=t[j]-k%t[j];}
      k+=c[j];
    }
    cout<<k<<endl;
  }
}
