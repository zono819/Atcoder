#include<bits/stdc++.h>
using namespace std;

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
    int N;
    //range_min
    SegmentTree<int> seg(
        N, [](int a, int b)
        { return min(a, b); },
        INT_MAX);

    //range_sum
    SegmentTree<int> seg(
        N, [](int a, int b)
        { return a + b; },
        0);
}