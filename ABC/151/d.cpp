#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> P;
signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int h,w,f=-1,sx,sy;
    cin>>h>>w;
    char c[h][w];
    int dp[h][w];
    bool b[h][w];
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            dp[i][j]=900;
            b[i][j]=false;
        }
    }
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>c[i][j];
            if(f==-1&&c[i][j]=='.'){f=1;sx=i;sy=j;}
        }
    }
    queue<pair<int,int>> q;
    dp[sx][sy]=0;
    q.push({sx,sy});
    int x[4]={1,0,-1,0};
    int y[4]={0,1,0,-1};

    while(q.size()){
        P p=q.front();
        int X=p.first,Y=p.second;
        for(int i=0;i<4;i++){
            int dx=X+x[i];
            int dy=Y+y[i];
            if(0<=dx&&dx<=h&&0<=dy&&dy<=w){
                if(c[dx][dy]=='.'){
                    if()
                }
            }
        }
    }

    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(c[i][j]=='.'){
                for(int i=0;i<4;i++){

                }
            }
        }
    }
}