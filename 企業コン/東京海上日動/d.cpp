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

vi v(262144),w(262144);

void query(int V,int L){
    vi a,b;
    while(V){
        a.push_back(v[V]);
        b.push_back(w[V]);
        V/=2;
    }
    int s = a.size();
    vi dp(s+1);
    rep(i,0,s){
        for(int j=L;j>=w[i];j--){
            dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
        }
    }
    cout<<dp[L]<<endl;
}

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,q,V,L;
    cin>>n;
    rep(i,0,n){
        cin>>v[i]>>w[i];
    }
    cin>>q;
    rep(i,0,q){
        cin>>V>>L;
        query(V-1,L);
    }
    return 0;
}