#include<bits/stdc++.h>
using namespace std;
int n,m,b,gy,gx,k=0;
vector<int> ry,rx,by,bx;
vector<char> c;
typedef pair<int,int> P;
signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    map<P,char> tup;
    cin>>n>>m>>b>>gy>>gx;
    ry.resize(m);rx.resize(m);
    by.resize(b);bx.resize(b);
    c.resize(m);
    for(int i=0;i<m;i++){
        cin>>ry[i]>>rx[i]>>c[i];
        if(gy<ry[i]&&gx<rx[i]&&c[i]!='U'){tup.insert(make_pair(P(ry[i],rx[i]),'U'));k++;}
        else if(gy<ry[i]&&gx>rx[i]&&c[i]!='R'){tup.insert(make_pair(P(ry[i],rx[i]),'R'));k++;}
        else if(gy>ry[i]&&gx<rx[i]&&c[i]!='D'){tup.insert(make_pair(P(ry[i],rx[i]),'D'));k++;}
        else if(gy>ry[i]&&gx>rx[i]&&c[i]!='L'){tup.insert(make_pair(P(ry[i],rx[i]),'L'));k++;}
        else if(gy<ry[i]&&gx==rx[i]&&c[i]!='U'){tup.insert(make_pair(P(ry[i],rx[i]),'U'));k++;}
        else if(gy>ry[i]&&gx==rx[i]&&c[i]!='D'){tup.insert(make_pair(P(ry[i],rx[i]),'D'));k++;}
        else if(gy==ry[i]&&gx>rx[i]&&c[i]!='R'){tup.insert(make_pair(P(ry[i],rx[i]),'R'));k++;}
        else if(gy==ry[i]&&gx<rx[i]&&c[i]!='L'){tup.insert(make_pair(P(ry[i],rx[i]),'L'));k++;}
        else{continue;}
}
    for(int i=0;i<b;i++){
        cin>>by[i]>>bx[i];
    }
    cout<<endl;
    cout<<tup.size()<<endl;
    for(auto it=tup.begin();it!=tup.end();it++){
        int a=(*it).first.first;
        int b=(*it).first.second;
        char D=(*it).second;
        cout<<a<<' '<<b<<' '<<D<<endl;
    }
}