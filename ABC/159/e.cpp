#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=a;i<n;i++)
#define FOR(i,n) for(int i=0;i<n;i++)



signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int h,w,k;
    cin>>h>>w>>k;
    int c[h][w];
    string s;
    rep(i,0,h){
        cin>>s;
        rep(j,0,w){
            c[i][j]=(int)(s[j]-'0');
        }
    }
}