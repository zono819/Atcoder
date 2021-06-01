#include<bits/stdc++.h>
using namespace std;
const int MAX = 100010;
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

long long COM(int n, int k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    COMinit();
    int n,k;
    cin>>n>>k;
    long long ans,m=0,M=0;
    vector<long long> a(n),bin(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());

    for(int i=k-1;i<=n-1;i++){
        bin[i]=COM(i,k-1);
    }
    for(int i=1;i<=n-k+1;i++){
        m+=a[i-1]*bin[n-i]%MOD;

    }
    for(int i=k;i<=n;i++){
        M+=a[i-1]*bin[i-1]%MOD;
    }
    ans=(M-m)%MOD;
    cout<<ans<<endl;
}