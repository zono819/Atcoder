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
const int MOD = 1e9 + 7;
//const int MOD = 998244353;
const ll INF = 1e18;

int w,n,k,a[50],b[50],dp[53][10001];

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cin>>w>>n>>k;
    rep(i,0,n){
        cin>>a[i]>>b[i];
    }
    memset(dp,0,sizeof(dp));
    rep(i,0,n){
        rrep(j,k,0){//真上になんか加える(加えない)形でdpの値を更新するので上から更新していかないとダブる
            rep(l,0,w+1-a[i]){
                dp[j+1][l+a[i]] = max(dp[j+1][l+a[i]],dp[j][l]+b[i]);
            }
        }
    }
    cout<<dp[k][w]<<endl;
}