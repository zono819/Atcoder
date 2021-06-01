#include<bits/stdc++.h>
using namespace std;
signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int x,y,m,n;
    cin>>x>>y;
    m=max(4-x,0);
    n=max(4-y,0);
    if(x+y==2){cout<<1000000;}
    else{
        cout<<(m+n)*100000;
    }
}