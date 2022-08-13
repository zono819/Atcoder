#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=a;i<n;i++)


vector<int> TopologicalSort(vector<vector<int>> &G, vector<int> &indeg,int v){
    vector<int> ret;
    queue<int> q;
    rep(i,0,v){
        if(indeg[i]==0){q.push(i);}
    }
    while(!q.empty()){
        int f = q.front();q.pop();
        for(int i=0;i<G[f].size();i++){
            indeg[G[f][i]]--;
            if(indeg[G[f][i]]==0){q.push(G[f][i]);}
        }
        ret.push_back(f);
    }
    return ret;
}

signed main(){
    int v,e,a,b;
    cin>>v>>e;
    vector<int> indeg(v,0);
    vector<vector<int>> G(v);

    for(int i=0;i<e;i++){
        cin>>a>>b;
        //a--;b--;//ここは入力次第
        G[a].push_back(b);
        indeg[b]++;
    }
    vector<int> ans = TopologicalSort(G,indeg,v);
    rep(i,0,ans.size()){
        cout<<ans[i]<<endl;
    }
}

