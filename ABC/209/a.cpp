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
    int n, q;
    cin >> n >> q;
    vector<vector<pair<int, int>>> g(n);
    rep(i,0,n-1){
        int a, b;
        cin >> a >> b;
        g[a-1].emplace_back(make_pair(b-1,1));
        g[b-1].emplace_back(make_pair(a-1,1));
    }
    vi v = dijkstra(0,g);
    vector<string> ans(q);
    rep(i, 0, q)
    {
        int c, d;
        cin >> c >> d;
        if((v[c-1]-v[d-1])%2){
            ans[i] = "Road";
        }
        else{
            ans[i] = "Town";
        }
    }
    rep(i,0,q){
        cout << ans[i] << endl;
    }
}