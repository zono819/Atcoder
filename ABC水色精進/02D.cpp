#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=a;i<n;i++)
#define FOR(i,n) for(int i=0;i<n;i++)
#define all(s) s.begin(),s.end()



signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    int g[n][n];
    rep(i,0,n){
        rep(j,0,n){
            g[i][j]=0;
        }
    }
    int a,b;
    rep(i,0,m){
        cin>>a>>b;
        a--;b--;
        g[a][b]=1;
        g[b][a]=1;
    }
    int ans = 1;
    int B = (1<<n);
    bool f = true;
    rep(i,0,B){
        int tmp = i;
        f = true;
        rep(j,0,n){
            rep(k,j+1,n){
                if(((tmp>>k)&1)&&((tmp>>j)&1)){if(g[j][k]==0){f = false;}}
            }
        }
        if(f){ans = max(ans,__builtin_popcount(tmp));}
    }
    cout<<ans<<endl;
}