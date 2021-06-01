#include<bits/stdc++.h>
using namespace std;
int n,m,b,gy,gx,k=0,dx[4]={0,1,0,-1},dy[4]={1,0,-1,0},nx,ny,d[40][40],sy,sx,x,y;
const int INF = 1000000007;
bool first[40][40];
char panel[40][40],start[40][40];
void command(int oy,int ox,int ney,int nex){
    if(0<=ney&&ney<n&&0<=nex&&nex<n){
    if(ney-oy==1&&d[oy][ox]>d[ney][nex]){panel[ney][nex]='D';}
    else if(ney-oy==1&&d[oy][ox]<d[ney][nex]){panel[oy][ox]='U';}

    else if(ney-oy==-1&&d[oy][ox]>d[ney][nex]){panel[ney][nex]='U';}
    else if(ney-oy==-1&&d[oy][ox]<d[ney][nex]){panel[oy][ox]='D';}

    else if(nex-ox==1&&d[oy][ox]>d[ney][nex]){panel[ney][nex]='R';}
    else if(nex-ox==1&&d[oy][ox]<d[ney][nex]){panel[oy][ox]='L';}

    else if(nex-ox==-1&&d[oy][ox]>d[ney][nex]){panel[ney][nex]='L';}
    else if(nex-ox==-1&&d[oy][ox]<d[ney][nex]){panel[oy][ox]='R';}
    }
}

void init_d(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            d[i][j]=INF;
        }
    }
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
    panel[gy][gx]='G';//ゴールを忘れてはいけない
    
    ry.resize(m);rx.resize(m);c.resize(m);
    by.resize(b);bx.resize(b);
    
    for(int i=0;i<m;i++){
        cin>>ry[i]>>rx[i]>>c[i];
        que.push(P(ry[i],rx[i]));//みんなでbfs
        panel[ry[i]][rx[i]]=c[i];//読み込んだ向きに更新
        first[ry[i]][rx[i]]=true;//これらが初期マス
    }
    for(int i=0;i<b;i++){
        cin>>by[i]>>bx[i];
        panel[by[i]][bx[i]]='B';//ここにはブロックがあるので除外
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            start[i][j]=panel[i][j];//初期値を記録しておいて最後に数える
        }
    }
////////////////////////////////////////////////////////////////////////////
    init_d();
    d[gy][gx]=0;
    que2.push(P(gy,gx));
    while(que2.size()){
        P st=que2.front();que2.pop();
        sy=st.first;sx=st.second;
        for(int i=0;i<4;i++){
            ny=sy+dy[i];
            nx=sx+dx[i];
            if(0<=nx&&nx<n&&0<=ny&&ny<n&&panel[ny][nx]!='B'&&d[ny][nx]==INF){
                d[ny][nx]=d[sy][sx]+1;que2.push(P(ny,nx));
            }
        }
    }

    while(!que.empty()){
        P Fr =que.front();que.pop();
        int i=Fr.first,j=Fr.second;
        if(panel[i][j]!='B'){
            for(int l=0;l<4;l++){
                if(panel[i+dy[l]][j+dx[l]]!='B'){command(i,j,i+dy[l],j+dx[l]);}
                }
            }    
        }

    for(int i=0;i<40;i++){
        for(int j=0;j<40;j++){
            for(int l=0;l<4;l++){
            ny=i+dy[l];
            nx=j+dx[l];
            if(0<=nx&&nx<n&&0<=ny&&ny<n&&panel[ny][nx]!='B'&&panel[i][j]!='B'&&d[ny][nx]!=INF){command(i,j,ny,nx);}
            }
        }
    }

    for(int i=0;i<40;i++){
        for(int j=0;j<40;j++){
            if(start[i][j]!=panel[i][j]&&panel[i][j]!='N'&&panel[i][j]!='B'&&panel[i][j]!='G'){
                k++;
                ans.push_back(P(i,j));
                ansc.push_back(panel[i][j]);
                }
        }
    }
    cout<<k<<endl;
    for(int i=0;i<k;i++){
        cout<<ans[i].first<<' '<<ans[i].second<<' '<<ansc[i]<<endl;
    }
}