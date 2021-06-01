#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
map<P,int> mp;
struct edge{
   int to,val;
};
vector<edge> G[100010];
P es[100010];
void dfs(int f,int t){
    int old=mp[{f,t}];
    int now=1;
    for(auto i:G[t]){
        if(i.to==t){continue;}
        if(now==old){now++;}
        mp[{t,i.to}]=now;
        mp[{i.to,t}]=now;
        dfs(i.to,t);
        now++;
    }
}
signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,a,b,ans=0;
    cin>>n;
    map<int,int> t;
    for(int i=0;i<n-1;i++){
        cin>>a>>b;
        a--;b--;
        t[a]++;t[b]++;
        es[i]={a,b};
        G[a].push_back({b,-1});
        G[b].push_back({a,-1});
    }
    for(int i=0;i<n;i++){
        ans=max(ans,t[i]);
    }
    cout<<ans<<endl;
    mp[{1,-1}]=-1;
    mp[{-1,1}]=-1;
    dfs(1,-1);
    for(int i=0;i<n-1;i++){
        cout<<mp[es[i]]<<endl;
    }
}