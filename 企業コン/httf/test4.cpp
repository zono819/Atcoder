//外に出ないBFS
//座標のペアを全部(y,x)にしてることに注意
#include<bits/stdc++.h>
using namespace std;
int n,m,b,gy,gx,k=0,dx[4]={0,1,0,-1},dy[4]={1,0,-1,0},nx,ny;
bool first[40][40];
char panel[40][40],start[40][40];
void command(int oy,int ox,int ney,int nex){
    if(ney-oy==1){panel[oy][ox]='D';}
    else if(ney-oy==-1){panel[oy][ox]='U';}
    else if(nex-ox==1){panel[oy][ox]='R';}
    else if(nex-ox==-1){panel[oy][ox]='L';}
}
bool end(int Y,int X){
    char Pan = panel[Y][X];
    if(Pan=='G'||!first[Y][X]){return true;}
    else{return false;}
}
typedef pair<int,int> P;
vector<int> ry,rx,by,bx;
vector<char> c;
queue<P> que,que2;
signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cin>>n>>m>>b>>gy>>gx;//n=40,m=100,b=300
    for(int i=0;i<40;i++){
        for(int j=0;j<40;j++){
            panel[i][j]='N';//初期値
        }
    }
    panel[gy][gx]='G';//ゴールを忘れてはいけない
    ry.resize(m);rx.resize(m);
    by.resize(b);bx.resize(b);
    c.resize(m);
    for(int i=0;i<m;i++){
        cin>>ry[i]>>rx[i]>>c[i];
        que.push(P(ry[i],rx[i]));//みんなでbfs
        panel[ry[i]][rx[i]]=c[i];//読み込んだ向きに更新
        first[ry[i]][rx[i]]=true;
    }
    for(int i=0;i<b;i++){
        cin>>by[i]>>bx[i];
        panel[by[i]][bx[i]]='B';//ここにはブロックがあるので除外
    }

    for(int i=0;i<40;i++){
        for(int j=0;j<40;j++){
            start[i][j]=panel[i][j];//初期値を記録しておいて最後に数える
        }
    }
    while(que.size()){
        P p=que.front();que.pop();
        int y=p.first,x=p.second;
        if(end(y,x)){continue;}
        else{
            que2.push(P(y,x));
            while(que2.size()){
                P Nq=que2.front();que2.pop();
                int Y=Nq.first,X=Nq.second;
                for(int i=0;i<4;i++){
                    ny=Y+dy[i];
                    nx=X=dx[i];
                    if(0>nx||nx>=n||0>ny||ny>=n||panel[ny][nx]=='B'){continue;}
                    else if(end(ny,nx)){command(Y,X,ny,nx);continue;}
                    else{command(Y,X,ny,nx);que2.push(P(ny,nx));}//パネルが'N'のときしか残ってないはず
                    }
                }
            que2.empty();
            }
        }
    cout<<endl;
    vector<P> ans;
    vector<char> ansc;
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