#include<bits/stdc++.h>
using namespace std;
int gcd(int m,int n){
    if(m>n){swap(m,n);}
    if(m==0){return n;}
    else{return gcd(n%m,m);}
}
signed main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n,a,M,k,g;
    cin>>n>>k;
    cin>>a;
    g=a;
    M=a;
    for(int i=1;i<n;i++){
        cin>>a;
        g=gcd(g,a);
        M=max(M,a);
    }
    if(k%g==0&&k<=M){cout<<"POSSIBLE";}
    else{cout<<"IMPOSSIBLE";}
}