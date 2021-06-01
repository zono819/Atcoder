#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,a,n) for(int i=a;i<n;i++)
const int MOD = 1e9 + 7;
typedef pair<int,int> P;
int h,w,a[1010][1010],s[1010][1010],visited[1010][1010];
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};

bool contain(int x,int y){
    return (0<=x&&x<h&&0<=y&&y<w);
}

int solve(int x,int y){
    if(visited[x][y]){return s[x][y];}
    int ret = 1;
    rep(i,0,4){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(contain(nx,ny)&&a[nx][ny]<a[x][y]){
            ret += solve(nx,ny);
            ret %= MOD;
        }
    }
    visited[x][y] = 1;
    return s[x][y] = ret;
}

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cin>>h>>w;
    rep(i,0,h){
        rep(j,0,w){
            cin>>a[i][j];
            s[i][j]=1;
        }
    }
    int ans = 0;

    rep(i,0,h){
        rep(j,0,w){
            ans += solve(i,j);
            ans%=MOD;
        }
    }
    ans%=MOD;
    cout<<ans<<endl;
}