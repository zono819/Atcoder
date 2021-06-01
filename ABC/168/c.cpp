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

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    double a,b,h,m;
    cin>>a>>b>>h>>m;
    double R = 6.0*m;
    double r = 30.0*h+0.5*m;
    double theta = (R>r?R-r:r-R);
    double ans = a*a+b*b-2.0*a*b*cos(2.0*PI*theta/360.0);
    cout<<setprecision(20)<<sqrt(ans)<<endl;
}