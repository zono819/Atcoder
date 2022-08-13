#include<bits/stdc++.h>
using namespace std;
signed main(){
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,a,f;cin>>n;
  deque<int> d;
  for(int i=0;i<n;i++){
    cin>>a;
    if((n-i)%2==0){d.push_back(a);}
    else{d.push_front(a);}
  }
  for(int i=0;i<n;i++){
    f=d.front();d.pop_front();
    cout<<f;
    if(i!=n-1){cout<<' ';}
  }
}