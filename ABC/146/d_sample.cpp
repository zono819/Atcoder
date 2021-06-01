#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define int long long
using namespace std;
typedef pair<int, int> P;
const int mod = 1000000007;
const int INF = 1e18;

struct edge{
   int to, c, id;
};

int n;
vector<edge> G[100010];
int deg[100010];
P es[100010];
map<P, int> mp;

void dfs(int v, int p){
    int used = mp[{v, p}];
    int now = 1;
    for(auto i : G[v]){
        if(i.to == p) continue;
        if(now == used) now++;
        mp[{v, i.to}] = now;
        mp[{i.to, v}] = now;
        dfs(i.to, v);
        now++;
    }
}

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cin >> n;
    rep(i, 0, n - 1){
        int a, b;
        cin >> a >> b;
        a--; b--;
        deg[a]++;
        deg[b]++;
        es[i] = {a, b};
        G[a].push_back({b, -1, i});
        G[b].push_back({a, -1, i});
    }
    int k = 0, idx = -1;
    rep(i, 0, n){
        if(k < deg[i]){
            k = deg[i];
            idx = i;
        }
    }
    cout << k << endl;
    mp[{idx, -1}] = -1;
    mp[{-1, idx}] = -1;
    dfs(idx, -1);
    rep(i, 0, n - 1){
        cout << mp[es[i]] << endl;
    }
}
