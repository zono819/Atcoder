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
#define vi vector<int>
#define vvi vector<vector<int>>
const int MOD = 1e9 + 7;
//const int MOD = 998244353;
const ll INF = 1e18;


signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int k;
    cin>>k;
    int ans =0;
    vi abs;
    rep(i,1,k+1){
        rep(j,1,k+1){
            abs.push_back(__gcd(i,j));
        }
    }
    rep(i,1,k+1){
        rep(j,0,abs.size())
        ans+=__gcd(abs[j],i);
    }
    cout<<ans<<endl;
}