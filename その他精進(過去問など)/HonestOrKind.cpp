#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=a;i<n;i++)
#define FOR(i,n) for(int i=0;i<n;i++)

int g[20][20];

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,a,x,y,ans=0,tmp=0;
    bool f;
    cin>>n;
    rep(i,0,20){
        rep(j,0,20){
            g[i][j]=-1;
        }
    }
    rep(i,0,n){
        cin>>a;
        rep(j,0,a){
            cin>>x>>y;
            x--;
            g[i][x] = y;
        }
    }
    rep(i,0,1<<n){
        vector<int>d(n);
        f=true;
        rep(j,0,n){
            if(i>>j&1){d[j]=1;}
        }
        rep(j,0,n){
            if(d[j]){
                rep(k,0,n){
                    if(g[j][k]==-1){continue;}
                    if(d[k]!=g[j][k]){f=false;}
                }
            }
        }
        if(f){ans=max(ans,__builtin_popcount(i));}
    }
    cout<<ans<<endl;
}