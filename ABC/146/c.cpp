#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dig(ll n){
    ll ret=0;
    while(n){
        ret++;
        n/=10;
    }
    return ret;
}
signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    ll a,b,x,m,M,c;
    cin>>a>>b>>x;
    m=0;
    if(x<1000000000){M=x;}
    else{M=1000000000;}
    c=(m+M)/2;
    while(m<c){
        if(a*c+b*dig(c)<=x){
            m=c;
        }
        else{
            M=c;
        }
        c=(m+M)/2;
    }
    if(a*M+b*dig(M)<=x){c=M;}
    cout<<c;
}