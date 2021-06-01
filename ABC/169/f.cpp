#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> P;
#define rep(i,a,n) for(int i=a;i<n;i++)
#define rrep(i,n,a) for(int i=n;i>=a;i--)
#define FOR(i,n) for(int i=0;i<n;i++)
#define all(s) s.begin(),s.end()
#define vi vector<int>
#define pcnt(n) __builtin_popcount(n)
const int MOD = 998244353;
const int INF = 1e18;
const double PI = acos(-1);

int dp[3010][3010];

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,s;
    cin>>n>>s;
    vi a(n);
    rep(i,0,n){
        cin>>a[i];
    }
    memset(dp, 0, sizeof(dp)); 
    dp[0][0] = 1;
    rep(i,0,n){
        rep(j,1,s+1){
            if(j>=a[i]){dp[i+1][j]+=dp[i][j-a[i]] + dp[i][j];}
            else{dp[i+1][j] += dp[i][j];}
        }
    }
    rep(i,0,n+1){
        rep(j,0,s+1){
            cout<<dp[i][j]<<' ';
        }
        cout<<endl;
    }
    cout<<dp[n][s]%MOD<<endl;
}