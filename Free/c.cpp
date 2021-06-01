#include <bits/stdc++.h>
using namespace std;
vector<vector<int>>G(21);
int sal[21];
void init(){
    for(int i=1;i<21;i++){
        for(auto p:G[i]){
            if(G[p].size()==0){
                sal[p]=1;
            }
        }
    }
}
void tak(){
    for(int i=1;i<21;i++){
        int ret=0,M=0,m=1000007;
        for(auto p:G[i]){
            m=min(m,G[i][p]);
            M=max(M,G[i][p]);
        }
        sal[i]=M+m+1;
    }
}
signed main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,a;
    cin>>n;
    for(int i=2;i<=n;i++){
        cin>>a;
        G[a].push_back(i);
    }
    init();
    tak();
    cout<<sal[1]<<endl;
}