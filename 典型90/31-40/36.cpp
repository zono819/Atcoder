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
    int n, q;
    cin >> n >> q;
    vector<P> p(n);
    int max_X = -1e9;
    int max_Y = -1e9;
    int min_X = 1e9;
    int min_Y = 1e9;
    rep(i, 0, n)
    {
        int x, y;
        cin >> x >> y;
        p[i] = make_pair(x - y, x + y);
        max_X = max(max_X, p[i].first);
        max_Y = max(max_Y, p[i].second);
        min_X = min(min_X, p[i].first);
        min_Y = min(min_Y, p[i].second);
    }
    rep(i,0,q)
    {
        int t;
        cin >> t;
        t--;
        int ret = max({abs(max_X - p[t].first), abs(min_X - p[t].first), abs(max_Y - p[t].second), abs(min_Y - p[t].second)});
        cout << ret << endl;
    }
}