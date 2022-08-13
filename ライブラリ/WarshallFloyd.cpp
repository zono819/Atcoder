#include<bits/stdc++.h>
using namespace std;
//-----------------------------------------
#define rep(i,a,n) for(int i=a;i<n;i++)
const int MAX_V=3000;
const int INF=1000000000;
int d[MAX_V][MAX_V];//d[u][v]=cost(u,v),d[i][i]=0;d[i][j]=INF(otherwise)
int V;
void warshall_floyd(){
    rep(i,0,V){
        rep(j,0,V){
            rep(k,0,V){
                d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
            }
        }
    }
}
signed main(){
    cin>>V;
    int from,to,cost;
    rep(i,0,V){
        rep(j,0,V){
            if(i==j){d[i][i]=0;}
            else{d[i][j]=INF;}
        }
    }
    rep(i,0,V){
        cin>>from>>to>>cost;
        // from--; to--; //ここは必要なら
        d[from][to]=cost;
        d[to][from]=cost;
    }
    warshall_floyd();
    return 0;
}