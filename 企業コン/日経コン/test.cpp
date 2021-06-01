#include<bits/stdc++.h>
using namespace std;
const int mod=998244353;
typedef long long ll;
ll power(ll m,ll n){
    ll ret =1,N=n;
    while(N){
        ret*=m;
        ret%=mod;
        N--;
    }
    return ret;
}
signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
     ll n,m,ans;
     cin>>n>>m;
     cout<<power(n,m);

}