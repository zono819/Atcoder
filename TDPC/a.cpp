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
    int n;
    cin>>n;
    vi p(n),point(10010,0);
    point[0]++;
    rep(i,0,n){
        cin>>p[i];
    }
    for(int j=0;j<n;j++){
        for(int i=10001;i>=0;i--){
            if(i-p[j]>=0){
                point[i]+=point[i-p[j]];
            }
        }
    }
    int ans = 0;
    rep(i,0,10001){
        if(point[i]){
            ans++;
        }
    }
    cout<<ans<<endl;
}