#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> P;
typedef long long ll;
#define rep(i,a,n) for(int i=a;i<n;i++)
#define FOR(i,n) for(int i=0;i<n;i++)
const int MOD = 1e9 + 7;
const int INF = 1e18;

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int r,c,sx,sy,gx,gy;
    char b;
    cin>>r>>c>>sy>>sx>>gy>>gx;
    sy--;sx--;gy--;gx--;
    queue<P>q;
    q.push({sy,sx});
    int m[r][c],d[r][c];
    int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
    rep(i,0,r){
        rep(j,0,c){
            cin>>b;
            d[i][j] = INF;
            if(b=='#'){m[i][j]=-1;}
            else{m[i][j]=0;}
        }
    }
    d[sy][sx] = 0;
    m[sy][sx] = 1;
    while(!q.empty()){
        P p = q.front();
        q.pop();
        int y = p.first, x = p.second;
        for(int i=0;i<4;i++){
            int ny = y + dy[i],nx = x + dx[i];
            if(m[ny][nx]!=0){continue;}
            else{
                d[ny][nx] = min(d[ny][nx],d[y][x] + 1);
                m[ny][nx] = 1;
                q.push({ny,nx});
            }
        }
    }
    cout<<d[gy][gx]<<endl;
}