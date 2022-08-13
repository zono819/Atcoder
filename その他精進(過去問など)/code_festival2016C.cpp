#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
const int INF = 1000000007;
using P=pair<int,int>;
vector<int> d(200005,0);
signed main(){
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,m,k,l;
  cin>>n>>m;
  queue<int> q;
  d[0]=1;
  q.push(0);
  vector<int> L[n+m];//人間は0~n-1,言語はn~n+l-1
  for(int i=0;i<n;i++){
    cin>>k;
    for(int j=0;j<k;j++){
      cin>>l;
      L[i].emplace_back(l+n-1);
      L[l+n-1].emplace_back(i);
    }
  }
  while(q.size()){
        int t=q.front();q.pop();
        for(auto y:L[t]){
            if(d[y]==0){d[y]=1;q.push(y);}
            else{continue;}
        }
    }
  for(int i=0;i<n;i++){
      if(d[i]==0){cout<<"NO";return 0;}
  }
  cout<<"YES";
}
