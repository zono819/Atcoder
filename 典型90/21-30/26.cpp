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

int tree[100010];
void bfs(vvi &g,int s,int prev){
    for(auto i:g[s]){
        if(tree[i]==-1){
            tree[i] = 1 - prev;
            bfs(g, i, 1 - prev);
        }
    }
}

void solve(vvi &g,int n){
    rep(i,0,100010){
        tree[i] = -1;
    }
    tree[0] = 0;
    bfs(g, 0, 0);
    queue<int>one,zero;
    rep(i, 0, n)
    {
        if (tree[i] == 0)
        {
            zero.push(i);
        }
        else{
            one.push(i);
        }
    }
    if(one.size()>zero.size())
    {
        rep(i,0,n/2)
        {
            cout << one.front()+1 << ' ';
            one.pop();
        }
    }
    else
    {
        rep(i,0,n/2){
            cout << zero.front()+1 << ' ';
            zero.pop();
        }
    }
    cout << endl;
}

signed main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vvi g(n);
    rep(i,0,n-1)
    {
        int a,b;
        cin >> a >>b;
        a--;
        b--;
        g[a].emplace_back(b);
        g[b].emplace_back(a);
    }
    solve(g,n);
}