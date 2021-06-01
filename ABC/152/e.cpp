#include<bits/stdc++.h>
using namespace std;
const int MAX = 1000010;
const int MOD = 1000000007;

long long fac[MAX], finv[MAX], inv[MAX];

void COMinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++){
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}
typedef long long ll;
ll gcd(ll a,ll b){
    if(a>b){swap(a,b);}
    if(a==0){return b;}
    else{return gcd(b%a,a);}
}
ll lcm(ll a,ll b){
    return (a/gcd(a,b)*b)%MOD;
}
signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n;
    ll ans=0,L=1;
    cin>>n;
    COMinit();
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        ans+=inv[a[i]];
    }
    cout<<ans;
}