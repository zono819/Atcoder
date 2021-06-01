#include<bits/stdc++.h>
using namespace std;
signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,m,b,gy,gx;
    cin>>n>>m>>b>>gy>>gx;
    vector<int> ry(m),rx(m),by(b),bx(b);
    vector<char> c(m);
    for(int i=0;i<m;i++){
        cin>>ry[i]>>rx[i]>>c[i];
    }
    for(int i=0;i<b;i++){
        cin>>by[i]>>bx[i];
    }
    cout<<0;
}
