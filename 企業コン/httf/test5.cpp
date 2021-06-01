#include<bits/stdc++.h>
using namespace std;
int n,m,b,gy,gx,k=0,dx[4]={0,1,0,-1},dy[4]={1,0,-1,0},nx,ny,d[40][40],sy,sx,x,y;
const int INF = 1000000007;
bool first[40][40];
char panel[40][40],start[40][40];
void command(int oy,int ox,int ney,int nex){
    if(ney-oy==1&&d[oy][ox]>d[ney][nex]){panel[ney][nex]='U';}
    else if(ney-oy==1&&d[oy][ox]<d[ney][nex]){panel[oy][ox]='D';}

    else if(ney-oy==-1&&d[oy][ox]>d[ney][nex]){panel[ney][nex]='D';}
    else if(ney-oy==-1&&d[oy][ox]<d[ney][nex]){panel[oy][ox]='U';}

    else if(nex-ox==1&&d[oy][ox]>d[ney][nex]){panel[ney][nex]='L';}
    else if(nex-ox==1&&d[oy][ox]<d[ney][nex]){panel[oy][ox]='R';}

    else if(nex-ox==-1&&d[oy][ox]>d[ney][nex]){panel[ney][nex]='R';}
    else if(nex-ox==-1&&d[oy][ox]<d[ney][nex]){panel[oy][ox]='L';}
}
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

    P ST=que.front();que.pop();
        que2.push(ST);
        y=ST.first;x=ST.second;
        d[y][x]=0;
        while(que2.size()){
            P st=que2.front();que2.pop();
            sy=st.first,sx=st.second;
            if(sy==gy&&sx==gx){break;}
            for(int i=0;i<4;i++){
                ny=sy+dy[i];
                nx=sx+dx[i];
                if(0<=nx&&nx<n&&0<=ny&&ny<n&&panel[ny][nx]!='B'&&d[ny][nx]==INF){
                    d[ny][nx]=min(d[ny][nx],d[sy][sx]+1);que2.push(P(ny,nx));
                }
            }
        }

    for(int i=0;i<40;i++){
        for(int j=0;j<40;j++){
            if(panel[i][j]!='B'){
                for(int l=0;l<4;l++){
                    command(i,j,i+dy[l],j+dx[l]);
                }
            }
        }
    }
    

    for(int i=0;i<40;i++){
        for(int j=0;j<40;j++){
            if(start[i][j]!=panel[i][j]){
                k++;
                ans.push_back(P(i,j));
                ansc.push_back(panel[i][j]);
                }//初期値を記録しておいて最後に数える
        }
    }
    cout<<k<<endl;
    for(int i=0;i<k;i++){
        cout<<ans[i].first<<' '<<ans[i].second<<' '<<ansc[i]<<endl;
    }
}