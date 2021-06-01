#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> P;
#define rep(i,a,n) for(int i=a;i<n;i++)
#define int long long
const int INF = 1e18;

const int MAX_H = 55;
const int MAX_W = 55;
char c[MAX_H][MAX_W];
int d[MAX_H][MAX_W],h,w;
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
bool contain(int x,int y){
    return (0<=x&&x<MAX_H&&0<=y&&y<MAX_W);
}
bool cell(int x,int y){
    return (c[x][y]=='.');//右辺もいじろう
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
            if(contain(nx,ny)&&cell(nx,ny)&&d[nx][ny]==INF){continue;}
            d[nx][ny] = d[x][y] + 1;
            q.push({nx,ny});
        } 
    }
}

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cin>>h>>w;
    int white = 0;
    rep(i,0,h){
        rep(j,0,w){
            cin>>c[i][j];
            if(c[i][j]=='.'){white++;}
        }
    }
    BFS(0,0);
    if(d[h-1][w-1]!=INF)cout<<white-d[h-1][w-1]-1<<endl;
    else{cout<<-1<<endl;}
}