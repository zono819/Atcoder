#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> P;
#define int long long
int n,m,u,v,l;
int d[310][310];
const int INF = 1e18;

void fillINF(){
    for(int i=0;i<310;i++){
        for(int j=0;j<310;j++){
            if(i!=j){d[i][j] = INF;}
        }
    }
}

void war(){
    for(int k=0;k<310;k++){
        for(int i=0;i<310;i++){
            for(int j=0;j<310;j++){
                d[i][j] = min(d[i][j],d[i][k]+d[k][j]);
            }
        }
    }
}

signed main(){

    cin>>n>>m;
    fillINF();
    vector<int>z;
    map<int,int>dist;
    for(int i=0;i<m;i++){
        cin>>u>>v>>l;
        u--;v--;
        if(u!=0){
            d[u][v] = l;
            d[v][u] = l;
        }else{
            dist[v] = l;
        }
    }
    war();
    int ans = INF;
    if(dist.size()<=1){cout<<-1<<endl;return 0;}
    else{
        for(auto x:dist){
            for(auto y:dist){
                if(x.first==y.first){continue;}
                else{
                    if(d[x.first][y.first]!=INF){ans=min(ans,d[x.first][y.first] + x.second + y.second);}
                }
            }
        }
    }
    if(ans == INF){ans = -1;}
    cout<<ans<<endl;
}