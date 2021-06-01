#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll m,ll n){
    if(m>n){swap(m,n);}
    if(m==0){return n;}
    else{return gcd(n%m,m);}
}
ll lcm(ll m,ll n){
    return m*n/gcd(m,n);
}
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll n,m,L,G;
    string s,t;
    cin>>n>>m>>s>>t;
    L=lcm(m,n);
    G=gcd(m,n);
    for(ll i=0;i<G;i++){
        if(s[n/G*i]!=t[m/G*i]){cout<<-1;return 0;}
    }
    cout<<L;
}