#include<bits/stdc++.h>
using namespace std;
#define int long long

const int MAX = 2000010;
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

int pw(int a, int x) {
    if (x == 0) return 1;
    int b = pw(a, x / 2);
    b = (b * b) % MOD;
    if (x % 2)
        return (a * b) % MOD;
    return b;
}

long long COM(int n, int k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n;
    string s;
    cin>>n>>s;
    COMinit();
    int ALL = (pw(26,n))*COM(n+s.length(),n)%MOD;
    cout<<ALL<<endl;
}