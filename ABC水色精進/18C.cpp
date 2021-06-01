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

char c[510][510];

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int h,w,k;cin>>h>>w>>k;
    rep(i,0,h+2){
        rep(j,0,w+2){
            c[i][j]='x';
        }
    }
    string s;
    rep(i,1,h+1){
        cin>>s;
        rep(j,1,w+1){
            c[i][j]=s[j-1];
        }
    }
    int U[h+2][w+2],D[h+2][w+2];
    memset(U,0,sizeof(U));memset(D,0,sizeof(D));
    rep(i,1,h+1){
        rep(j,1,w+1){
            if(c[i][j]=='x'){U[i][j]=0;D[i][j]=0;}
            else{
                U[i][j]=U[i-1][j]+1;
            }
        }
    }
    rrep(i,h,1){
        rrep(j,w,1){
            if(c[i][j]=='x'){U[i][j]=0;D[i][j]=0;}
            else{
                D[i][j]=D[i+1][j]+1;
            }
        }
    }
    int ans = 0;
    rep(i,1,h+1){
        rep(j,1,w+1){
            if(c[i][j]=='o'){
                bool ok = true;
                rep(ii,0,k){
                    if(j-ii<1||U[i][j-ii]<k-ii||D[i][j-ii]<k-ii){ok=false;break;}
                    if(j+ii>w||U[i][j+ii]<k-ii||D[i][j+ii]<k-ii){ok=false;break;}
                }
                if(ok){ans++;}
            }
        }
    }
    cout<<ans<<endl;
}