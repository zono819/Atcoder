#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> P;
#define rep(i,a,n) for(int i=a;i<n;i++)
#define vi vector<int>
#define vvi vector<vector<int>>

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,a,b,k = 0;
    cin>>n;

    vector<P>vp;
    map<P,int>eds;
    queue<int>q;
    vi c(n,0),used(n,0);
    vvi G(n);
    rep(i,0,n-1){
        cin>>a>>b;
        a--;b--;
        G[a].emplace_back(b);
        G[b].emplace_back(a);
        vp.emplace_back(a,b);
    }
    
    q.push(0);
    used[0]=1;
    while(!q.empty()){
        int s = q.front();q.pop();
        if((int)G[s].size() > k){k = (int)G[s].size();}
        int now = 1;
        for(auto x:G[s]){
            if(used[x]){continue;}
            if(now == c[s]){now++;}
            c[x] = now;
            eds[{s,x}] = now;
            eds[{x,s}] = now;
            now++;
            used[x] = 1;
            q.push(x);
        }
    }

    cout<<k<<endl;
    for(auto p:vp){
        cout<<eds[p]<<endl;
    }
    return 0;
}