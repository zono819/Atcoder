#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n,ans=0;
    cin>>n;
    while(n){
      ans+=n%10;
      n/=10;
    }
  if(n==1){cout<<10;}
  else{cout<<ans;}
}