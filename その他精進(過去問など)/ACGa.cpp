#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> P;
typedef long long ll;
#define rep(i,a,n) for(int i=a;i<n;i++)
#define FOR(i,n) for(int i=0;i<n;i++)
const int MOD = 1e9 + 7;
//const int MOD = 998244353;
const int INF = 1e18;
#define all(s) s.begin(),s.end()



signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    double n,k;
    cin>>n>>k;
    double ans = 0;
    ans += 6.0*(1.0/n)*((k-1)/n)*((n-k)/n);
    ans += 3.0*(1.0/n)*(1.0/n)*(n-1.0)/n;
    ans += pow((1.0/n),3);
    cout<<setprecision(20)<<ans<<endl;
}