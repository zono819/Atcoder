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

char c[2020][2020];

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int h,w;cin>>h>>w;
    rep(i,0,h+2){
        rep(j,0,w+2){
            c[i][j]='#';
        }
    }
    rep(i,1,h+1){
        rep(j,1,w+1){
            cin>>c[i][j];
        }
    }
    int L[h+2][w+2],R[h+2][w+2],U[h+2][w+2],D[h+2][w+2];
    memset(L,0,sizeof(L));memset(R,0,sizeof(R));memset(U,0,sizeof(U));memset(D,0,sizeof(D));
    rep(i,1,h+1){
        rep(j,1,w+1){
            if(c[i][j]=='#'){L[i][j]=0;R[i][j]=0;U[i][j]=0;D[i][j]=0;}
            else{
                L[i][j]=L[i][j-1]+1;U[i][j]=U[i-1][j]+1;D[i][j]=D[i+1][j]+1;R[i][j]=R[i][j+1]+1;
            }
        }
    }
    rrep(i,h,1){
        rrep(j,w,1){
            if(c[i][j]=='#'){L[i][j]=0;R[i][j]=0;U[i][j]=0;D[i][j]=0;}
            else{
                D[i][j]=D[i+1][j]+1;R[i][j]=R[i][j+1]+1;
            }
        }
    }
    int ans = 0;
    rep(i,1,h+1){
        rep(j,1,w+1){
            ans = max(ans,L[i][j]+R[i][j]+U[i][j]+D[i][j]-3);
            //cout<<R[i][j]<<' ';//+R[i][j]+U[i][j]+D[i][j]-3<<' ';
        }
    }
    cout<<ans<<endl;
}