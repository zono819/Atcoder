#include <bits/stdc++.h>
using namespace std;
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
const double PI = acos(-1);

signed main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int h, w;
    cin >> h >> w;
    if ((h == 1) || (w == 1))
    {
        cout << max(h, w) << endl;
    }
    else
    {
        cout << (int)((1 + h) / 2) * (int)((1 + w) / 2) << endl;
    }
}