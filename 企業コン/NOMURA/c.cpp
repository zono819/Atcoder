#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int,int> P;
#define rep(i,a,n) for(int i=a;i<n;i++)
#define rrep(i,n,a) for(int i=n;i>=a;i--)
#define FOR(i,n) for(int i=0;i<n;i++)
#define all(s) s.begin(),s.end()
#define vi vector<ll>
#define vvi vector<vector<ll>>
#define pcnt(n) __builtin_popcount(n)
const int MOD = 1e9 + 7;
//const int MOD = 998244353;
const ll INF = 1e18;
const double PI = acos(-1);


signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int N;
    cin>>N;
    vi a(N+1),n(N+1);
    rep(i,0,N+1){
        cin>>a[i];
    }
    if(!(a[0]^N)){cout<<-1;return 0;}
    n[0] = 1;
    rep(i,1,N+1){
        n[i] = 2*n[i-1] - a[i];
        if(n[i] < 0){cout<<-1;return 0;}
    }
    int ans = 0;
    rep(i,0,N){
        ans+=n[i] + a[i];
    }
    ans+=a[N];
    cout<<ans<<endl;
}