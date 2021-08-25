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
    int n,q;
    cin >> n >> q;
    vi a(n),ans;
    rep(i, 0, n) { cin >> a[i]; }
    int ind = 0;
    rep(i, 0, q)
    {
        int t,x,y;
        cin >> t >> x >> y;
        if(t==1)
        {
            swap(a[(x - 1 + n + ind) % n], a[(y - 1 + n + ind) % n]);
        }
        else if(t==2)
        {
            ind -= 1;
            ind = (ind + n) % n;
        }
        else
        {
            ans.emplace_back(a[(x - 1 + n + ind) % n]);
        }
    }
    for(int i : ans)
    {
        cout << i << endl;
    }
}