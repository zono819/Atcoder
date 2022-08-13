#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=a;i<n;i++)
#define FOR(i,n) for(int i=0;i<n;i++)


vector<int>p(11),sw(11);
int n,m;


signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int k,s,ans=0;
    bool f;
    cin>>n>>m;
    vector<int> d[m];
    rep(i,0,m){
        cin>>k;
        rep(j,0,k){
            cin>>s;
            s--;
            d[i].push_back(s);
        }
    }
    rep(i,0,m){
        cin>>p[i];
    }
    vector<int>count(m,0);
    rep(i,0,1<<n){
        f=true;
        rep(j,0,m){count[j]=0;}
        rep(j,0,n){if(i>>j&1){sw[j]=1;}else{sw[j]=0;}}
        rep(j,0,m){
            rep(l,0,d[j].size()){
                if(sw[d[j][l]]){count[j]++;}
            }
        }
        rep(j,0,m){
            if((count[j]%2)!=p[j]){f=false;}
        }
        if(f){ans++;}
    }
    cout<<ans<<endl;
}