#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> P;
typedef long long ll;
#define rep(i,a,n) for(int i=a;i<n;i++)
#define FOR(i,n) for(int i=0;i<n;i++)
const int MOD = 1e9 + 7;
const int INF = 1e18;


signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int w,h;
    string s;
    cin>>h>>w;
    char im[h+2][w+2],ans[h+2][w+2];
    rep(i,0,h+2){
        rep(j,0,w+2){
            im[i][j]='#';
            ans[i][j]='.';
        }
    }
    rep(i,0,h){
        cin>>s;
        rep(j,0,w){
            im[i+1][j+1]=s[j];
        }
    }
    rep(i,1,h+1){
        rep(j,1,w+1){
            
        }
    }
}
