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

long long COM(int n, int k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}
int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int r1,r2,c1,c2;
    cin>>r1>>c1>>r2>>c2;
    COMinit();
    long long ans=0;
    ans%=MOD;
    cout<<ans<<endl;
}