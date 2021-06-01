#include<bits/stdc++.h>
using namespace std;
signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,m,q,ac=0,wa=0;
    string s;
    cin>>n>>m;
    int WA[n+1];
    bool AC[n+1];
    for(int i=1;i<=n;i++){
        WA[i]=0;
        AC[i]=false;
    }
    for(int i=0;i<m;i++){
        cin>>q>>s;
        if(AC[q]){continue;}
        else if(!AC[q]&&s=="WA"){WA[q]++;}
        else if(!AC[q]&&s=="AC"){ac++;AC[q]=true;}
    }
    for(int i=1;i<=n;i++){
        if(AC[i]){wa+=WA[i];}
    }
    cout<<ac<<' '<<wa<<endl;
}