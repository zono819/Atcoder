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

vector<int> bef(100010,-1);

template<typename T>
void dijkstra(int s,vector<vector<pair<int, T> > > & G){  
  const T INF = numeric_limits<T>::max();    
  using P = pair<T, int>;
  int n=G.size();
  vector<T> d(n,INF);
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
        bef[u]=v;
        q.emplace(d[u],u);
      }
    }
  }
  //return d;
}

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,m,a,b;
    cin>>n>>m;
    vector<vector<P>>G(n);
    rep(i,0,m){
        cin>>a>>b;
        a--;b--;
        G[a].push_back({b,1});
        G[b].push_back({a,1});
    }
    dijkstra(0,G);
    rep(i,1,n){
        if(bef[i]==-1){cout<<"No"<<endl;return 0;}
    }
    cout<<"Yes"<<endl;
    rep(i,1,n){
        cout<<(bef[i]+1)<<endl;
    }
}