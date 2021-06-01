#include<bits/stdc++.h>
using namespace std;
int n,m,b,gy,gx,k=0,dx[4]={0,1,0,-1},dy[4]={1,0,-1,0},nx,ny,d[10][10],sy,sx,x,y;
const int INF = 1000000007;
bool first[40][40];
char panel[40][40],start[40][40];

bool end(int Y,int X){
    char Pan = panel[Y][X];
    if(Pan=='G'||!first[Y][X]){return true;}
    else{return false;}
}
typedef pair<int,int> P;
vector<int> ry,rx,by,bx;
vector<char> c,ansc;
queue<P> que,que2;
vector<P> ans;

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cin>>n>>m>>b>>gy>>gx;//n=40,m=100,b=300
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            panel[i][j]='N';//初期値
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            d[i][j]=INF;
        }
    }
}