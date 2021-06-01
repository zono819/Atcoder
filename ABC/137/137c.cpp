#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  long long ans=0;
  cin>>n;
  unordered_map<string,int> umap;
  for(int i=0;i<n;i++){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    if(umap.find(s)!=umap.end()){ans+=++umap[s];}
    else{umap[s]=0;}
  }
  cout<<ans;
}