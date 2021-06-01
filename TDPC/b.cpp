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

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int A,B;
    cin>>A>>B;
    vi a(A),b(B);
    rep(i,0,A){
        cin>>a[i];
    }
    rep(i,0,B){
        cin>>b[i];
    }
    int dp[1010][1010];
    //左からi右からjとった時の先攻の最適
    dp[A][B]=0;
    rrep(i,A,0){
        rrep(j,B,0){
            if(i==A&&j==B){continue;}
            if((i+j)%2==0){
                if(i==A){
                    dp[i][j] = b[j] + dp[i][j+1];
                }
                else if(j==B){
                    dp[i][j] = a[i] + dp[i+1][j];
                }
                else{
                    dp[i][j] = max(b[j] + dp[i][j+1],a[i] + dp[i+1][j]);
                }
            }
            else{
                if(i==A){
                    dp[i][j] = dp[i][j+1];
                }
                else if(j==B){
                    dp[i][j] = dp[i+1][j];
                }
                else{
                    dp[i][j] = min(dp[i+1][j],dp[i][j+1]);
                }
            }
        }
    }
    cout<<dp[0][0]<<endl;
}