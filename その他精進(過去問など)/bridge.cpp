#include<bits/stdc++.h>
using namespace std;
int n,m;
bool ad[51][51];
bool visit[51];
void dfs(int v){
    visit[v]=true;
    for(int i=0;i<m;i++){
        if(ad[v][i]==false){continue;}
        if(visit[i]==true){continue;}
        dfs(i);
    }
}
int main(){
    cin>>n>>m;
    int a[m],b[m],ans=0;
    bool bri;
    for(int i=0;i<m;++i){
        cin>>a[i]>>b[i];
        a[i]--;b[i]--;
        ad[a[i]][b[i]]=ad[b[i]][a[i]]=true;
    }

    for(int i=0;i<m;++i){
        bri=false;
        ad[a[i]][b[i]]=ad[b[i]][a[i]]=false;
        for(int j=0;j<n;++j){visit[j]=false;}
        dfs(0);
        for(int j=0;j<n;++j){if(visit[j]==false){bri=true;}}
        if(bri){ans++;}
        ad[a[i]][b[i]]=ad[b[i]][a[i]]=true;
    }
    cout<<ans;
}