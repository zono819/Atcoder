#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,a,n) for(int i=a;i<n;i++)

int dp[55][55][2600];

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,a;
    cin>>n>>a;
    vector<int> x(n);
    rep(i,0,n){cin>>x[i];}
    dp[0][0][0]=1;
    rep(i,0,n+1){
        rep(j,0,n+1){
            rep(k,0,2600){
                if(k+x[i]<=2500){dp[i+1][j+1][k+x[i]]+=dp[i][j][k];}
                dp[i+1][j][k] += dp[i][j][k];
            }
        }
    }
    int ans = 0;
    rep(i,1,n+1){
        ans += dp[n][i][i*a];
    }
    cout<<ans<<endl;
}