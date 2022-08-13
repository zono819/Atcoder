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
//--------------cut here------------------
const int MAX_H = 100;
const int MAX_W = 100;



char c[MAX_H][MAX_W];
int d[MAX_H][MAX_W],h,w;
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
bool contain(int x,int y){
    return (0<=x&&x<h&&0<=y&&y<w);
}
bool cell(int x,int y){
    return (c[x][y]=='.');
}

void BFS(int sx,int sy){
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            d[i][j] = INF;
        }
    }
    d[sx][sy]=0;
    queue<P> q;
    q.push({sx,sy});
    int nx,ny;
    while(!q.empty()){
        P p = q.front();q.pop();
        int x = p.first,y = p.second;
        if(x==h-1&&y==w-1){break;}
        for(int i=0;i<4;i++){
            nx = x + dx[i];
            ny = y + dy[i];
            if(contain(nx,ny)&&cell(nx,ny)&&d[nx][ny]==INF){
                d[nx][ny] = d[x][y] + 1;
                q.push({nx,ny});
            }
        } 
    }
}

//--------------cut here------------------
signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
}