#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> P;
typedef long long ll;
#define rep(i,a,n) for(int i=a;i<n;i++)
#define rrep(i,n,a) for(int i=n;i>=a;i--)
#define FOR(i,n) for(int i=0;i<n;i++)
#define all(s) s.begin(),s.end()
#define vi vector<int>
#define vvi vector<vector<int>>
#define pcnt(n) __builtin_popcount(n)
const int MOD = 1e9 + 7;
//const int MOD = 998244353;
const int INF = 1e18;
const double PI = acos(-1);

int n,m,x;

vector<int>c(15);
int a[15][15];
int cost(int bits){
    vector<int>sat(13,0);
    int ret = 0;
    rep(i,0,n){
        if((bits>>i)&1){
            ret+=c[i];
            rep(j,0,m){
                sat[j]+=a[i][j];
            }
        }
    }
    rep(i,0,m){
        if(sat[i]<x){return INF;}
    }
    return ret;
}

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cin>>n>>m>>x;
    rep(i,0,n){
        cin>>c[i];
        rep(j,0,m){
            cin>>a[i][j];
        }
    }
    int B = 1<<n;
    int ans = INF;
    rep(i,0,B){
        ans = min(ans,cost(i));
    }
    if(ans==INF){ans=-1;}
    cout<<ans<<endl;
}