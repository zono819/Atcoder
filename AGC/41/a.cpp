#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=a;i<n;i++)
signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    long long n,a,b,r,l,c,R,L;
    cin>>n>>a>>b;
    l=a-1;
    r=n-b;
    c=b-a;
    R=c+2*r;
    L=c+2*l;
    if(c%2==0){cout<<(b-a)/2;return 0;}
    else if(R>L){cout<<L/2+1;}
    else{cout<<R/2+1;}
}