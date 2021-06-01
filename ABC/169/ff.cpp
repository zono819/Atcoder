#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> P;
#define rep(i,a,n) for(int i=a;i<n;i++)
#define rrep(i,n,a) for(int i=n;i>=a;i--)
#define FOR(i,n) for(int i=0;i<n;i++)
#define all(s) s.begin(),s.end()
#define vi vector<int>
#define pcnt(n) __builtin_popcount(n)
const int MOD = 998244353;
const int INF = 1e18;
const double PI = acos(-1);

int dp[3010][3010];

int pw(int a, int x) {
    if (x == 0) return 1;
    int b = pw(a, x / 2);
    b = (b * b) % MOD;
    if (x % 2)
        return (a * b) % MOD;
    return b;
}

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,A;
    cin >> n >> A;
    vi a(n);
  for (int i = 0; i < n; ++i) cin >> a[i];

  memset(dp, 0, sizeof(dp));
  dp[0][0] = 1;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j <= A; ++j) {
      (dp[i+1][j] += 2*dp[i][j]) %= MOD;
      if (j >= a[i]) (dp[i+1][j] += dp[i][j-a[i]]) %= MOD;
    }
  }
  cout << dp[n][A]%MOD << endl;
}