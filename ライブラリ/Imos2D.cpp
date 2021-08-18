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

//Imos2D ans(h,w);
struct Imos2D
{
    vvi A;
    int H, W;
    Imos2D(int h, int w)
    {
        H = h;
        W = w;
        A.resize(H, vi(W));
    }

    // [(y0,x0), (y1,x1)]
    void add(int y0, int x0, int y1, int x1, int v)
    {
        A[y0][x0] += v;
        A[y1 + 1][x1 + 1] += v;
        A[y0][x1 + 1] -= v;
        A[y1 + 1][x0] -= v;
    }
    void calc()
    {
        // horizontal imos
        rep(y, 0, H)
        {
            rep(x, 0, W - 1)
            {
                A[y][x + 1] += A[y][x];
            }
        }

        // vertical imos
        rep(x, 0, W)
        {
            rep(y, 0, H - 1)
            {
                A[y + 1][x] += A[y][x];
            }
        }
    }
    int val(int y, int x)
    {
        return A[y][x];
    }
};

signed main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
}