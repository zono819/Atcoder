#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int, int> P;
typedef pair<char, int> pci;
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

int id[1000009][26];

signed main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    rep(i, 0, 26)
    {
        id[s.size()][i] = s.size();
    }
    rrep(i, s.size() - 1, 0)
    {
        rep(j, 0, 26)
        {
            if ((int)(s[i] - 'a') == j)
            {
                id[i][j] = i;
            }
            else
            {
                id[i][j] = id[i + 1][j];
            }
        }
    }

    string ans = "";
    int tmp = 0;
    rep(i, 0, k)
    {
        rep(j, 0, 26)
        {
            int nxt = id[tmp][j];
            int ma = (int)(s.size()) - nxt + i;
            if (ma >= k)
            {
                ans += (char)('a' + j);
                tmp = nxt + 1;
                break;
            }
        }
    }
    cout << ans << endl;
}