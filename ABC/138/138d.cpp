#include<bits/stdc++.h>
using namespace std;
int n,q;
vector<int> ed[200010];
int val[200010];
void dfs(int v,int p,int x){
    val[v]+=x;
    for(auto i:ed[v]){
        if(i==p){continue;}
        dfs(i,v,val[v]);
    }
}
int main(){
    cin>>n>>q;
    int a,b,p,x;
    for(int i=0;i<n-1;i++){
        cin>>a>>b;
        a--;b--;
        ed[a].push_back(b);
        ed[b].push_back(a);
    }
    for(int i=0;i<q;i++){
        cin>>p>>x;
        p--;
        val[p]+=x;
    }
    dfs(0,-1,0);
    for(int i=0;i<n;i++){
        if(i){cout<<' ';}
        cout<<val[i];
    }
    cout<<endl;
}