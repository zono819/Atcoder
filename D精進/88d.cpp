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

char c[55][55];
int d[55][55],h,w;

bool ok(int px,int py){
    return (0<=px&&px<h&&0<=py&&py<w);
}
signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int black=0,dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
    cin>>h>>w;
    rep(i,0,h){
        rep(j,0,w){
            cin>>c[i][j];
            if(c[i][j]=='#'){black++;}
        }
    }
    rep(i,0,h){
        rep(j,0,w){
            d[i][j]=INF;
        }
    }
    d[0][0]=0;
    queue<P> q;
    q.push({0,0});
    while(!q.empty()){
        P p = q.front();
        q.pop();
        int x = p.first,y=p.second;
        if(x==h-1&&y==w-1){break;}
        rep(i,0,4){
            int px = x+dx[i],py=y+dy[i];
            if(!ok(px,py)||c[px][py]=='#'||d[px][py]!=INF){continue;}
            d[px][py]=d[x][y]+1;q.push({px,py});
        }
    }
    if(d[h-1][w-1]==INF){
        cout<<-1<<endl;
    }
    else{int ans = h*w-black-d[h-1][w-1]-1;
        cout<<ans<<endl;
        }
}
