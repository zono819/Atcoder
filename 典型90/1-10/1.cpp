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
    int n, l, k, ans=0;
    cin >> n >> l >> k;
    vi a(n+1);
    rep(i, 0, n)
    {
        cin >> a[i];
    }
    a[n] = l - a[n-1];
    rrep(i,n-1,1)
    {
        a[i] = a[i] - a[i - 1];
    }
    int m = 1;
    int M = l / (k + 1) + 1;
    while(M-m>1)
    {
        int x = (m + M) / 2;
        int cnt = 0;
        int len = 0;
        rep(i, 0, n + 1)
        {
            len += a[i];
            if(len>=x)
            {
                len = 0;
                cnt++;
            }
        }
        if(cnt>=k+1)
        {
            m = x;
        }
        else
        {
            M = x;
        }
    }
    cout << m << endl;
}