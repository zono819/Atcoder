#include<bits/stdc++.h>
using namespace std;
int main(){
  int H,W,M;
  cin>>H>>W>>M;
  vector<int>h(H,0),w(W,0);
  for(int i=0;i<M;i++){
    int a,b;
    cin>>a>>b;
    h[a-1]++;
    w[b-1]++;
  }
  sort(h.rbegin(),h.rend());
  sort(w.rbegin(),w.rend());
  int ans = 0;
  
}