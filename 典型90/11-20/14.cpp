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
    vi a(n), b(n);
    rep(i,0,n)
    {
        cin >> a[i];
    }
    rep(i, 0, n)
    {
        cin >> b[i];
    }
    sort(all(a));
    sort(all(b));
    int ans = 0;
    rep(i,0,n)
    {
        ans+=abs(a[i]-b[i]);

    }
    cout << ans << endl;
}