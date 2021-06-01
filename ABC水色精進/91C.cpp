#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> P;
typedef long long ll;
#define rep(i,a,n) for(int i=a;i<n;i++)
#define rrep(i,n,a) for(int i=n;i>=a;i--)
#define FOR(i,n) for(int i=0;i<n;i++)
#define all(s) s.begin(),s.end()
#define lla(s) s.rbegin(),s.rend()
#define pcnt(b) __builtin_popcount(b)
#define vi vector<int>
#define vvi vector<vector<int>>
#define vp vector<pair<int,int>>
const int MOD = 1e9 + 7;
//const int MOD = 998244353;
const ll INF = 1e18;


signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,x,y;
    cin>>n;
    int red[210][210]={},blue[210][210]={};
    rep(i,0,n){
        cin>>x>>y;
        red[x][y]=1;
    }
    rep(i,0,n){
        cin>>x>>y;
        blue[x][y]=1;
    }
    int ans = 0;
    n*=2;
    rep(i,0,n){
        rep(j,0,n){
            if(!blue[i][j]){continue;}
            else{
                int mx=-1,my=-1;
                rep(k,0,i){
                    rep(l,0,j){
                        if(red[k][l]&&(l>my||my==-1)){
                            mx = k;my = l;
                        }
                    }
                }
                if(mx!=-1&&my!=-1){blue[i][j]=0;red[mx][my]=0;ans++;}
            }
        }
    }
    cout<<ans<<endl;
}