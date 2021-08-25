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

template <typename Monoid>
struct SegmentTree
{
    using F = function<Monoid(Monoid, Monoid)>;

    int sz;
    vector<Monoid> seg;

    const F f;
    const Monoid M1;

    //size n, f:operator, M1:unit
    SegmentTree(int n, const F f, const Monoid &M1) : f(f), M1(M1)
    {
        sz = 1;
        while (sz < n)
            sz <<= 1;
        seg.assign(2 * sz, M1);
    }

    void set(int k, const Monoid &x)
    {
        seg[k + sz] = x;
    }

    void build()
    {
        for (int k = sz - 1; k > 0; k--)
        {
            seg[k] = f(seg[2 * k + 0], seg[2 * k + 1]);
        }
    }

    void update(int k, const Monoid &x)
    {
        k += sz;
        seg[k] = x;
        while (k >>= 1)
        {
            seg[k] = f(seg[2 * k + 0], seg[2 * k + 1]);
        }
    }

    Monoid query_(int l, int r, int a, int b, int u)
    {
        if (l <= a && b <= r)
            return seg[u];
        if (r <= a || b <= l)
            return -(1LL << 60);
        Monoid v1 = query_(l, r, a, (a + b) >> 1, u * 2);
        Monoid v2 = query_(l, r, (a + b) >> 1, b, u * 2 + 1);
        return f(v1, v2);
    }

    Monoid query(int l, int r)
    {
        return query_(l, r, 0, sz, 1);
    }
};

signed main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n, q;
    cin >> n >> q;
    SegmentTree<int> seg(
        n, [](int a, int b)
        { return min(a, b); },
        INT_MAX);
    while (q--)
    {
        int c, x, y;
        cin >> c >> x >> y;
        if(c){
            cout << seg.query(x, y) <<endl ;
        }
        else
        {
            seg.update(x, y);
        }
    }
}