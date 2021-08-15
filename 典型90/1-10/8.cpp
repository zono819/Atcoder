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

int dp[1000009][8];
signed main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n;
    string s;
    cin >> n >> s;
    //i文字目まででatcoderのj文字目を作る場合の数
    dp[0][0] = 1;
    string atc = "atcoder";
    rep(i, 0, n)
    {
        rep(j,0,8){
            dp[i+1][j] += dp[i][j];
            if((s[i]==atc[j]) && (j<7))
            {
                dp[i+1][j+1] += dp[i][j];
                dp[i+1][j+1] %= MOD;
            }
            dp[i+1][j] %= MOD;
        }
    }
    cout << dp[n][7] << endl;
}