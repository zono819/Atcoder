#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,i;
  cin>>n;
  if(n==0){cout<<0;return 0;}
  vector<int> a;
  i=-2;
  while(n){
    int b=n%i?1:0;
    a.push_back(b);
    n-=b;
    n/=-2;
  }
  reverse(a.begin(),a.end());
  for(int i=0;i<a.size();i++){
    cout<<a[i];
  }
  return 0;
}