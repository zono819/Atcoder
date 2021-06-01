#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m,c;
  long long ans=0;
  cin>>n>>m;
  vector<int> a(n);
  priority_queue<int> pque;
  for(int i=0;i<n;i++){
    cin>>a[i];
    pque.push(a[i]);
  }
  for(int i=0;i<m;i++){
    c=pque.top(); pque.pop();
    c/=2;
    pque.push(c);
  }
  for(int i=0;i<n;i++){
      c=pque.top();pque.pop();
      ans+=c;
  }
  cout<<ans;
}
