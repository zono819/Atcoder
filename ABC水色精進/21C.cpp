#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> P;
typedef long long ll;
#define rep(i,a,n) for(int i=a;i<n;i++)
#define rrep(i,n,a) for(int i=n;i>=a;i--)
#define FOR(i,n) for(int i=0;i<n;i++)
#define all(s) s.begin(),s.end()
#define lla(s) s.rbegin(),s.rend()
#define pcnt(b) __builtin_popcount(b)
#define vi vector<int>
#define vvi vector<vector<int>>
#define vp vector<pair<int,int>>
const int MOD = 1e9 + 7;


#define MAX_V 110 
#define INF 2000000000 
struct edge {
    int to;
    int cost;
};

typedef pair<int, int> P;  // first: 最短距離, second: 頂点番号

int V, d[MAX_V], cnt[MAX_V];
vector<edge> G[MAX_V]; // 隣接リスト表現

void dijkstra(int s) {
    fill(d, d + V, INF);
    d[s] = 0;  // 始点sへの最短距離は0
    fill(cnt, cnt + V, 0);
    cnt[s] = 1;  // 始点sへの最短経路数は1

    priority_queue<P, vector<P>, greater<P>> que;  // 距離が小さい順に取り出せるようgreater<P>を指定
    que.push(P(0, s));
    while (!que.empty()) {
        P p = que.top();
        que.pop();
        int v = p.second;  // 更新した頂点の中で距離が最小の頂点v
        if (d[v] < p.first) {
            continue;
        }
        for (auto e : G[v]) {  // 頂点vから出る辺eを走査
            if (d[e.to] > d[v] + e.cost) {
                d[e.to] = d[v] + e.cost;
                que.push(P(d[e.to], e.to));
                cnt[e.to] = cnt[v];  // コストが更新された場合は直前の頂点への最短経路数で上書き
            } else if (d[e.to] == d[v] + e.cost) {
                cnt[e.to] += cnt[v];  // コストが一致する場合はこれまでの最短経路数を足し合わせ
                cnt[e.to]%=MOD;
            }
        }
    }
}

signed main(){    
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int m,a,b,x,y;
    cin>>V>>a>>b>>m;
    a--;b--;
    rep(i,0,m){
        cin>>x>>y;
        x--;y--;
        G[x].push_back({y,1});
        G[y].push_back({x,1});
    }
    dijkstra(a);
    cout<<cnt[b]%MOD<<'\n';
}