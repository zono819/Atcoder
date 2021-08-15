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
    vi a(n);
    rep(i,0,n)
    {
        cin >> a[i];
    }
    int q;
    cin >> q;
    sort(all(a));
    vi ans(q);
    rep(i, 0, q)
    {
        int b;
        cin >> b;
        auto it = lower_bound(all(a),b);
        if(it==a.begin()){
            ans[i] = abs(a[0] - b);
        }
        else{
            ans[i] = min(abs(*it - b), abs(*(it--)-b));
        }
    }
    rep(i,0,q)
    {
        cout << ans[i] << endl;
    }
}