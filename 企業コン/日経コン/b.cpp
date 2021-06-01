#include<bits/stdc++.h>
using namespace std;
const int mod=998244353;
typedef long long ll;
ll power(ll m,ll n){
    ll ret =1,N=n;
    while(N){
        ret=(ret*m)%mod;
        N--;
    }
    return ret;
}
signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    ll n,a,ans=1,ma=-1;
    cin>>n;
    vector<ll> d(n,0);
    for(int i=0;i<n;i++){
        cin>>a;
        d[a]++;
        if(a>ma){ma=a;}
        if(i!=0&&a==0){cout<<0;return 0;}
    }
    if(d[0]!=1){cout<<0;return 0;}
    for(int i=0;i<ma;i++){
        ans=(ans*power(d[i],d[i+1]))%mod;
    }
    cout<<ans%mod;
}