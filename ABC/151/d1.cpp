#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> P;
int d[21][21],h,w;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
bool v[21][21];
char c[21][21];
queue<P> q,emp;
bool maze(int x,int y){
    return (0<=x&&x<h&&0<=y&&y<w);
}
P bfs(int x,int y){
    for(int i=0;i<21;i++){
        for(int j=0;j<21;j++){
            d[i][j]=600;
        }
    }
    q=emp;
    d[x][y]=0;
    q.push({x,y});
    while(!q.empty()){
        P p=q.front();
        q.pop();
        int X= p.first;
        int Y= p.second;
        for(int i=0;i<4;i++){
            int a = X+dx[i];
            int b= Y+dy[i];
            if(!maze(a,b)){continue;}
            else if(maze(a,b)){
                if(c[a][b]=='.'){
                    d[a][b]=min(d[a][b],d[X][Y]+1);
                    q.push({a,b});
                    }
            }
        }
    }
    int m=0,retx,rety;
    for(int i=0;i<21;i++){
        for( int j=0;j<21;j++){
            if(m<d[i][j]&&c[i][j]=='.'){
                retx=i,rety=j;m=d[i][j];
            }
        }
    }
    return {retx,rety};
}
signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int h,w,f=-1,sx,sy,ans=0;
    cin>>h>>w;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>c[i][j];
            if(f==-1&&c[i][j]=='.'){f=1;sx=i;sy=j;}
        }
    }
    P F = bfs(sx,sy);
    int x2=F.first,y2=F.second;
    cout<<d[x2][y2]<<endl;
    P S= bfs(x2,y2);
    for(int i=0;i<21;i++){
        for(int j=0;j<21;j++){
            //cout<<d[i][j]<<' ';
            if(c[i][j]=='.'&&ans<d[i][j]){ans=d[i][j];}
        }
        //cout<<endl;
    }
    cout<<ans;
}