#include<bits/stdc++.h>
using namespace std;

struct edge{int to, cap, rev;};
const int INF = 1e9;
const int MAX_V = 200000;
vector<edge>G[MAX_V];
bool used[MAX_V];


void add_edge(int from,int to, int cap){
    G[from].push_back((edge){to,cap,(int)G[to].size()});
    G[to].push_back((edge){from,0,(int)G[from].size()-1});
}

int dfs(int v,int t,int f){
    if(v==t){return f;}
    used[v] = true;
    for(int i=0;i<G[v].size();i++){
        edge &e = G[v][i];
        if(!used[e.to]&&e.cap > 0){
            int d = dfs(e.to,t,min(f,e.cap));
            if(d > 0){
                e.cap -= d;
                G[e.to][e.rev].cap += d;
                return d;
            }
        }
    }
    return 0;
}

int max_flow(int s,int t){
    int flow = 0;
    for(;;){
        memset(used,0,sizeof(used));
        int f = dfs(s,t,INF);
        if(f==0){return flow;}
        flow+=f;
    }
}

int main(){
    int m,s,t;
    cin>>m>>s>>t;
    for(int i=0;i<m;i++){
        int a,b,c;
        cin>>a>>b>>c;
        add_edge(a,b,c);
    }
    cout<<max_flow(s,t)<<endl;
}