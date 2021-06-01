#include<bits/stdc++.h>
using namespace std;
signed main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n,a,b,ans;
    cin>>n>>a>>b;
    ans=(b*n-b+a)-(a*n-a+b)+1;
    cout<<max(0,ans);
}