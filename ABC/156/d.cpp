#include<bits/stdc++.h>
using namespace std;

const int MAX = 200010;
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
long pow(long a, long n, long m) {
	long ret = 1;
	for (; n > 0; n >>= 1, a = a * a % m) {
		if (n % 2 == 1) {
			ret = ret * a % m;
		}
	}
	return ret;
}

long comb(long n,long r){
    long ret = 1;
    for(int i=1;i<=r;i++){
        ret*=inv[i];
        ret%=MOD;

        ret*=(n+1-i);
        ret%=MOD;
    }
    return ret;
}
signed main(){
    long n,a,b;
    cin>>n>>a>>b;
    long ans=pow(2,n,MOD)-1;
    COMinit();
    ans=(ans-comb(n,a)-comb(n,b))%MOD;
    if(ans<0)ans+=MOD;
    cout<<ans%MOD<<endl;
}