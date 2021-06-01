#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> P;
typedef long long ll;
#define rep(i,a,n) for(int i=a;i<n;i++)
#define rrep(i,n,a) for(int i=n;i>=a;i--)
#define FOR(i,n) for(int i=0;i<n;i++)
#define all(s) s.begin(),s.end()
#define lla(s) s.rbegin(),s.rend()
#define pcnt(b) __builtin_popcount(b)
#define vi vector<int>
#define vvi vector<vector<int>>
#define vp vector<pair<int,int>>
const int MOD = 1e9 + 7;
//const int MOD = 998244353;
const ll INF = 1e18;

int t,sx,sy,gx,gy;

const int MAX_H = 11;
const int MAX_W = 11;



char c[MAX_H][MAX_W];
int d[MAX_H][MAX_W],h,w;
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
bool contain(int x,int y){
    return (0<=x&&x<h&&0<=y&&y<w);
}
bool cell(int x,int y){
    return (c[x][y]=='.');
}

void BFS(int m,int sx,int sy){
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
        if(x==gx&&y==gy){continue;}
        for(int i=0;i<4;i++){
            nx = x + dx[i];
            ny = y + dy[i];
            if(contain(nx,ny)&&cell(nx,ny)){
                if(d[nx][ny] > d[x][y] + 1){d[nx][ny] = d[x][y] + 1;q.push({nx,ny});}
            }
            else if(contain(nx,ny)){
                if(d[nx][ny] > d[x][y] + m){d[nx][ny] = d[x][y] + m;q.push({nx,ny});}
            }
        } 
    }
}

bool ok(int x){
    BFS(x,sx,sy);
    return (d[gx][gy]<=t);
}

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cin>>h>>w>>t;
    rep(i,0,h){
        rep(j,0,w){
            cin>>c[i][j];
            if(c[i][j]=='S'){sx=i;sy=j;c[i][j]='.';}
            else if(c[i][j]=='G'){gx=i;gy=j;c[i][j]='.';}
        }
    }
    int low = 0,high = t;
    while(low+1<high){
        int mid = (low+high)/2;
        if(ok(mid)){low = mid;}
        else{high = mid;}
    }
    cout<<low<<endl;
}