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

int p5(int n){
    return (n*n*n*n*n);
}

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int x;
    cin>>x;
    rep(i,-130,130){
        rep(j,-130,130){
            if(p5(i) - p5(j) == x){cout<<i<<' '<<j;return 0;}
        }
    }
}