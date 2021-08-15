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
    int a, b, c;
    cin >> a >> b >> c;
    int x, y, z;
    x = max(a, max(b, c));
    z = min(a, min(b, c));
    y = a + b + c - x - z;
    int ans = 10000;
    rep(i, 0, n / x + 1)
    {
        rep(j,0,n/y+1)
        {
            if ((n - i * x - j * y) % z == 0 && ((n - i * x - j * y) >=0))
            {
                ans = min(ans, i + j + (n - i * x - j * y) / z);
            }
        }
    }
    cout << ans << endl;
}