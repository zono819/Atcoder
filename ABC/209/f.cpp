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
    vi h(n);
    rep(i, 0, n)
    {
        cin >> h[i]; //h0~hn-1
    }
    int dp[n][n];
    rep(i,0,n){
        rep(j,0,n+1){
            if(i==j){
                dp[i][j] = h[i];
            }
            else{
                dp[i][j] = INF;
            }
        }
    }
    rep(c,1,n-1){
        rep(i,0,n-c){
            int tmp = INF;
            rep(j,i,c){
                tmp = min(tmp, dp[i][j] + dp[j+1][i+c]);
            }
            dp[i][i + c] = tmp;
        }
    }
}