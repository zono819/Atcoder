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
    int n;
    cin >> n;
    vvi cs(2,vi(n+1,0));
    rep(i, 0, n)
    {
        int c, p;
        cin >> c >> p;
        cs[c-1][i+1] = p;
    }
    rep(i,0,n)
    {
        cs[0][i + 1] += cs[0][i];
        cs[1][i + 1] += cs[1][i];
    }
    int q;
    cin >> q;
    vector<P> ans;
    rep(i,0,q)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b;
        ans.emplace_back(make_pair(cs[0][b] - cs[0][a], cs[1][b] - cs[1][a]));
    }
    rep(i,0,q)
    {
        cout << ans[i].first << ' ' << ans[i].second << endl;
    }
}