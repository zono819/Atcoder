#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> P;
typedef long long ll;
#define rep(i,a,n) for(int i=a;i<n;i++)
#define rrep(i,n,a) for(int i=n;i>=a;i--)
#define FOR(i,n) for(int i=0;i<n;i++)
#define all(s) s.begin(),s.end()
#define vi vector<int>
#define vvi vector<vector<int>>
#define pcnt(n) __builtin_popcount(n)
const int MOD = 1e9 + 7;
//const int MOD = 998244353;
const int INF = 1e18;
const double PI = acos(-1);

template <typename T>
vector<T> dijkstra(int s,vector<vector<pair<int, T> > > & G){  
  using P = pair<T, int>;
  int n=G.size();
  vector<T> d(n,INF);
  vector<int> b(n,-1);
  priority_queue<P,vector<P>,greater<P> > q;
  d[s]=0;
  q.emplace(d[s],s);
  while(!q.empty()){
    P p=q.top();q.pop();
    int v=p.second;
    if(d[v]<p.first) continue;
    for(auto& e:G[v]){
      int u=e.first;
      T c=e.second;
      if(d[u]>d[v]+c){
        d[u]=d[v]+c;
        b[u]=v;
        q.emplace(d[u],u);
      }
    }
  }
  return d;
}

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,m,t;
    cin>>n>>m>>t;
    vector<int>A(n);
    vector<vector<P>>G(n),H(n);
    rep(i,0,n){
        cin>>A[i];
    }
    rep(i,0,m){
        int a,b,c;
        cin>>a>>b>>c;
        a--;b--;
        G[a].push_back({b,c});
        H[b].push_back({a,c});
    }
    vector<int>d = dijkstra(0,G);
    vector<int>back = dijkstra(0,H);
    int ans = 0;
    rep(i,0,n){
        if(d[i]==INF||back[i]==INF){continue;}
        else if(d[i] + back[i] > t){continue;}
        else{
            int tmp = t - d[i] - back[i];
            ans = max(ans,tmp*A[i]);
        }
    }
    cout<<ans<<endl;
}