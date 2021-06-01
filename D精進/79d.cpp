#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> P;
typedef long long ll;
#define rep(i,a,n) for(int i=a;i<n;i++)
#define FOR(i,n) for(int i=0;i<n;i++)
#define all(s) s.begin(),s.end()
const int MOD = 1e9 + 7;
//const int MOD = 998244353;
const int INF = 1e18;




signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int h,w,ans=0,a;
    int c[10][10];
    cin>>h>>w;
    rep(i,0,10){
        rep(j,0,10){
            cin>>c[i][j];
        }
    }
    for(int k=0;k<10;k++){
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                c[i][j]=min(c[i][j],c[i][k]+c[k][j]);
            }
        }
    }
    rep(i,0,h){
        rep(j,0,w){
            cin>>a;
            if(a>=0)ans+=c[a][1];
        }
    }
    cout<<ans<<endl;
}