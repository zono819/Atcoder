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
const double PI = 3.14152653589793238462643383279;

signed main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n, k;
    cin >> n >> k;
    vi num(n + 20, 0);
    rep(i,2,n + 1)
    {
        if(num[i])
        {
            continue;
        }
        else
        {
            for (int j = i; j <= n;j+=i)
            {
                num[j]++;
            }
        }
    }
    int ans = 0;
    rep(i, 2, n + 1)
    {
        if(num[i]>=k)
        {
            ans++;
        }
    }
    cout << ans << endl;
}