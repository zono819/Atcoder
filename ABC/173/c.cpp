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
    int h, w, k, ans = 0;
    cin >> h >> w >> k;
    vector<vector<char>> c(h,vector<char>(w));
    rep(i,0,h){
        rep(j,0,w){
            cin >> c[i][j];
        }
    }
    int hb = 1 << h;
    int wb = 1 << w;
    rep(i,0,hb){
        rep(j,0,wb){
            int bcnt = 0;
            rep(r,0,h){
                rep(l,0,w){
                    if(((i>>r)%2)&&((j>>l)%2)){
                        if(c[r][l] == '#')bcnt++;
                    }
                }
            }
            ans += (bcnt == k);
        }
    }
    cout << ans << endl;
}