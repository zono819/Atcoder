#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int, int> P;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define rrep(i, n, a) for (int i = n; i >= a; i--)
#define FOR(i, n) for (int i = 0; i < n; i++)
#define all(s) s.begin(), s.end()
#define vi vector<int>
#define vvi vector<vector<int>>
#define pcnt(n) __builtin_popcount(n)
const int MOD = 1e9 + 7;
//const int MOD = 998244353;
const int INF = 1e18;
const double PI = acos(-1);

signed main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n, l;
    cin>>n>>l;
    int dp[100010];
    /*memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    rep(i,1,n+1)
    {
        dp[i] = dp[i - 1];
        if(i>=l)
        {
            dp[i] += dp[i - l];
        }
        dp[i] %= MOD;
    }
    cout << dp[n] << endl;
    */
   rep(i,99999,100010)
   {
       cout << dp[i] << endl;
   }
}