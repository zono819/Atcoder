#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
map<P,int> mp;
struct edge{
   int to, c, id;
};
vector<edge> G[100010];
void dfs(int f,int t){
    int old=mp[{f,t}];
    int now=1;
    for(auto i:G[f]){
        if(i.to==t){continue;}
        if(now==old){now++;}
        mp[{f, i.to}] = now;
        mp[{i.to, f}] = now;
        dfs(i.to, f);
        now++;
    }
}
signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,a,b,ans=0;
    cin>>n;
    map<int,int> t;
    vector<pair<P,int>> v;
    vector<int> g[n-1];
    for(int i=0;i<n-1;i++){
        cin>>a>>b;
        t[a]++;t[b]++;
        g[a].push_back(b);
        g[b].push_back(a);
        v[i]=make_pair(make_pair(a,b),0);
    }
    for(int i=1;i<=n;i++){
        ans=max(ans,t[i]);
    }
    cout<<ans<<endl;

}