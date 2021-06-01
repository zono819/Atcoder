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
const int MOD = 998244353;
const int INF = 1e18;
const double PI = acos(-1);

int a,b,c,d;
int dp[3000][3000];
void display(){
    rep(i,0,c){
        rep(j,0,d){
            cout<<dp[i][j]<<' ';
        }
        cout<<endl;
    }
}

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cin>>a>>b>>c>>d;
    rep(i,0,a){
        rep(j,0,b){
            dp[i][j]=1;
        }
    }
    rep(i,0,c){
        rep(j,0,d){
            if(i==0&&j==0){continue;}
            else if(i==0){dp[i][j]=dp[i][j-1];}
            else if(j==0){dp[i][j]=dp[i-1][j];}
            else{dp[i][j]+=dp[i-1][j]*(j+1)+dp[i][j-1]*(i+1)-i*j*dp[i-1][j-1];}
            dp[i][j]%=MOD;
        }
    }
    //display();
    cout<<dp[c-1][d-1]%MOD<<endl;
}