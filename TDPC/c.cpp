#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> P;
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

double er(double a,double b){
    return 1.0/(1.0+pow(10.0,(b-a)/400.0));
}

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int k;
    cin>>k;
    int p = 1<<k;
    vector<double> r(k);
    rep(i,0,p){
        cin>>r[i];
    }
    double dp[1100][15];//人iがj回勝てる確率
    rep(i,0,p){
        dp[i][0] = 1.0;
        if(i%2==0){
            dp[i][1] = er(r[i],r[i+1]);
            dp[i+1][1] = er(r[i+1],r[i]);
        }
    }
    rep(i,0,p){
        rep(j,2,k+1){
            int lb = ((i^(1<<(j-1)))>>(j-1))<<(j-1);
            int ub = (i>>(j-1))<<(j-1);
            double tmp = 0.0;
            rep(d,lb,ub){
                tmp+=er(r[i],r[d]) * dp[d][j-1];
            }
            dp[i][j] = dp[i][j-1] * tmp;
        }
    }
    rep(i,0,p){
        cout<<dp[i][k]<<endl;
    }
}