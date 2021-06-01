#include<bits/stdc++.h>
using namespace std;

const int MAX_LOG_V = 20;
const int MAX_V = 100010;

vector<int>G[MAX_V];
int root;

int parent[MAX_LOG_V][MAX_V];
int depth[MAX_V];

void dfs(int v,int p,int d){
    parent[0][v] = p;
    depth[v] = d;
    for(int i = 0;i < G[v].size();i++){
        if(G[v][i]==p){continue;}
        dfs(G[v][i],v,d + 1);
    }
}

void init(int V){
    dfs(root,-1,0);
    for(int k = 0;k + 1 < MAX_LOG_V;k++){
        for(int v = 0;v < V;v++){
            if(parent[k][v] < 0){parent[k + 1][v] = -1;}
            else{parent[k + 1][v] = parent[k][parent[k][v]];}
        }
    }
}

int LCA(int u,int v){
    if(depth[u] > depth[v]){swap(u,v);}
    for(int k = 0;k < MAX_LOG_V;k++){
        if((depth[v] - depth[u])>>k & 1){
            v = parent[k][v];
        }
    }
    if(u==v){return u;}
    for(int k = MAX_LOG_V - 1;k >= 0;k--){
        if(parent[k][u] != parent[k][v]){
            u = parent[k][u];
            v = parent[k][v];
        }
    }
    return parent[0][u];
}

int dist(int u,int v){
    return (depth[u] + depth[v] - 2*depth[LCA(u,v)]);
}


signed main(){

    
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++){
        int a,b;
        cin>>a>>b;
        a--;b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    root = 0;
    init(n);
    int q;
    cin>>q;
    vector<int>ans(q);
  for(int i=0;i<q;i++){
       int a,b;
       cin>>a>>b;
       a--;b--;
       ans[i]=dist(a,b)+1;
  }
  for(int i=0;i<q;i++){
      cout<<ans[i]<<endl;
  }
  return 0;
}