#include<bits/stdc++.h>
using namespace std;
int n,m,b,gy,gx,k=0;
vector<int> ry,rx,by,bx;
vector<char> c;
//自分の四方どこに一番多くロボットがいるか数える
signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cin>>n>>m>>b>>gy>>gx;
    ry.resize(m);rx.resize(m);
    by.resize(b);bx.resize(b);
    c.resize(m);
    set<int> x,y;
    for(int i=0;i<m;i++){
        cin>>ry[i]>>rx[i]>>c[i];
        if(gy==ry[i]&&gx==rx[i]){k--;}//ゴールにいるロボ分のパネルは置かない
        else if(gy==ry[i]){y.insert(rx[i]);}
        else if(gx==rx[i]){x.insert(ry[i]);}
        else{k++;}
    }
    for(int i=0;i<b;i++){
        cin>>by[i]>>bx[i];
    }
    cout<<max(k,0)<<endl;
}