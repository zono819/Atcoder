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
    int k;
    cin >> k;
    if(k%9!=0)
    {
        cout << 0 << endl;
        return 0;
    }
    else
    {
        int dp[100010][9];//各桁の和がiで、９で割ったあまりがj
        memset(dp, 0, sizeof(dp));
        dp[0][0] = 1;
        rep(i,0,k+1)
        {
            rep(l,1,10)
            {
                rep(j,0,9)
                {
                    dp[i + l][(l + j) % 9] += dp[i][j];
                    dp[i + l][(l + j) % 9] %= MOD;
                }
            }
        }
        cout << dp[k][0] << endl;
    }
}