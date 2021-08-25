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

int dp[100010];
vvi g(100010);

void dfs(int now,int pre)
{
    dp[now] = 1;
    for(int v:g[now])
    {
        if(v!=pre)
        {
            dfs(v, now);
            dp[now] += dp[v];
        }
    }
}

signed main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    
    rep(i, 0, n - 1)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        g[a].emplace_back(b);
        g[b].emplace_back(a);
    }
    dfs(0, -1);
    int ans = 0;
    rep(i,0,n)
    {
        ans += dp[i] * (n - dp[i]);
    }
    cout << ans << endl;
}