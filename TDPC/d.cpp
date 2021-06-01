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

long double dp[110][60][40][30];

void solve1(int n){
       dp[0][0][0][0] = 1.0;
       for(int m=0;m<n;m++){
           for(int i=0;i<60;i++){
               for(int j=0;j<40;j++){
                   for(int k=0;k<30;k++){
                       dp[m+1][i][j][k]+=dp[m][i][j][k]/6.0;//1
                       dp[m+1][i+1][j][k]+=dp[m][i][j][k]/6.0;//2
                       dp[m+1][i][j+1][k]+=dp[m][i][j][k]/6.0;//3
                       if(i<38){
                           dp[m+1][i+2][j][k]+=dp[m][i][j][k]/6.0;//4
                       }
                       dp[m+1][i][j][k+1]+=dp[m][i][j][k]/6.0;//5
                       dp[m+1][i+1][j+1][k]+=dp[m][i][j][k]/6.0;//6
                   }
               }
           }
       }
}

void solve2(int n){
    dp[0][0][0][0] = 1.0;
       for(int i=0;i<n;i++){
           dp[i+1][0][0][0] = dp[i][0][0][0]*6.0;
       }
       for(int m=0;m<n;m++){
           for(int i=0;i<59;i++){
               for(int j=0;j<39;j++){
                   for(int k=0;k<29;k++){
                       dp[m+1][i][j][k]+=dp[m][i][j][k];//1
                       dp[m+1][i+1][j][k]+=dp[m][i][j][k];//2
                       dp[m+1][i][j+1][k]+=dp[m][i][j][k];//3
                       if(i<38){
                           dp[m+1][i+2][j][k]+=dp[m][i][j][k];//4
                       }
                       dp[m+1][i+1][j][k]+=dp[m][i][j][k];//4
                       dp[m+1][i][j][k+1]+=dp[m][i][j][k];//5
                       dp[m+1][i+1][j+1][k]+=dp[m][i][j][k];//6
                   }
               }
           }
       }
}

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,d;
    cin>>n>>d;
    int p2 = 0,p3 = 0,p5 = 0;
    while(d%2==0){
        p2++;
        d/=2;
    }
    while(d%3==0){
        p3++;
        d/=3;
    }
    while(d%5==0){
        p5++;
        d/=5;
    }
    if(d!=1){
        cout<<0.0000000<<endl;
        return 0;
    }
    else{
        solve1(n);
        long double ans = 0.0;
        for(int i=p2;i<60;i++){
            for(int j=p3;j<40;j++){
                for(int k=p5;k<30;k++){
                    ans+=dp[n][i][j][k];
                }
            }
        }
        cout<<setprecision(20)<<ans<<endl;
    }
}