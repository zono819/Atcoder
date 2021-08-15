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


template <typename T>
vector<T> dijkstra(int s, vector<vector<pair<int, T>>> &G)
{
    const T INF = numeric_limits<T>::max();
    using P = pair<T, int>;
    int n = G.size();
    vector<T> d(n, INF);
    vector<int> b(n, -1);
    priority_queue<P, vector<P>, greater<P>> q;
    d[s] = 0;
    q.emplace(d[s], s);
    while (!q.empty())
    {
        P p = q.top();
        q.pop();
        int v = p.second;
        if (d[v] < p.first)
            continue;
        for (auto &e : G[v])
        {
            int u = e.first;
            T c = e.second;
            if (d[u] > d[v] + c)
            {
                d[u] = d[v] + c;
                b[u] = v;
                q.emplace(d[u], u);
            }
        }
    }
    return d;
}

signed main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    vector<vector<pair<int, int>>> G(n);
    rep(i, 0, m)
    {
        int a, b, c;
        cin >> a >> b >> c;
        a--;
        b--;
        G[a].emplace_back(b, c);
        G[b].emplace_back(a, c);
    }
    vector<int> s = dijkstra(0, G);
    vector<int> g = dijkstra(n - 1, G);
    rep(i,0,n)
    {
        cout << s[i] + g[i] << endl;
    }
}