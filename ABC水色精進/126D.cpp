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

vector<vector<P>> G(100010);
int n,a,b,w;
vi c(100010,-1);

void dfs(int s,int sum){
    c[s] = sum%2;
    for(auto x:G[s]){
        if(c[x.first]!=-1){continue;}
        else{
            c[x.first] = (sum+x.second)%2;
            dfs(x.first,sum+x.second);
        }
    }
}

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cin>>n;
    rep(i,0,n-1){
        cin>>a>>b>>w;
        a--;b--;
        G[a].emplace_back(b,w);
        G[b].emplace_back(a,w);
    }
    c[0]=0;
    dfs(0,0);
    rep(i,0,n){
        cout<<c[i]<<endl;
    }
}