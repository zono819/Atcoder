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

    Monoid query(int a, int b)
    {
        Monoid L = M1, R = M1;
        for (a += sz, b += sz; a < b; a >>= 1, b >>= 1)
        {
            if (a & 1)
                L = f(L, seg[a++]);
            if (b & 1)
                R = f(seg[--b], R);
        }
        return f(L, R);
    }

    Monoid operator[](const int &k) const
    {
        return seg[k + sz];
    }
};

signed main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int w, n;
    cin >> w >> n;
    SegmentTree<int> seg(
        w, [](int a, int b)
        { return max(a, b) + 1; },
        0);

    rep(i, 0, seg.sz)
    {
        seg.set(i, 0);
    }
    seg.build();
    rep(i, 0, n)
    {
        int l, r;
        cin >> l >> r;
        int h = seg.query(l, r);
        cout << h << endl;
    }
}