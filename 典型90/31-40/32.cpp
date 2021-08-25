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
    int n, m;
    cin >> n;
    vvi a(n, vi(n));
    rep(i,0,n)
    {
        rep(j,0,n)
        {
            cin >> a[i][j];
        }
    }
    cin >> m;
    vvi b(n, vi(n,0));
    rep(i,0,m)
    {
        int x, y;
        cin >> x >> y;
        b[x - 1][y - 1] = 1;
        b[y - 1][x - 1] = 1;
    }
    vi v(n);
    rep(i,0,n)
    {
        v[i] = i;
    }
    int ans = INF;
    do
    {
        int tmp = a[v[0]][0];
        rep(i, 1, n)
        {
            if(b[v[i-1]][v[i]])
            {
                tmp = INF;
                break;
            }
            else
            {
                tmp += a[v[i]][i];
            }
        }
        ans = min(tmp, ans);
    } while (next_permutation(all(v)));
    cout << ((ans == INF) ? -1 : ans) << endl;
}