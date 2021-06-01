#include <bits/stdc++.h>
using namespace std;

const int MAX = 400010;
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

signed main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    COMinit();
    int n,k,ans=0;
    cin>>n>>k;
    k=min(n,k);
    for(int i=0;i<n;i++){
        ans+=COM(n,i)*COM(n,n-i-1)%MOD;
    }
    ans%=MOD;
    cout<<ans<<endl;
}