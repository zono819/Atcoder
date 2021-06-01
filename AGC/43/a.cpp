#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> P;
typedef long long ll;
#define rep(i,a,n) for(int i=a;i<n;i++)
#define FOR(i,n) for(int i=0;i<n;i++)
const int MOD = 1e9 + 7;
//const int MOD = 998244353;
const int INF = 1e18;


signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int h,w;
    bool m[h][w];
    char c;
    rep(i,0,h){
        rep(j,0,w){
            cin>>c;
            m[i][j]=(c=='.'?true:false);
        }
    }
    int sx = 0, sy = 0,ans = 0;
    while(sx<h&&sy<w){
        if(m[sx][sy]){
            
        }
    }
}