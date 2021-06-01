#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> P;
#define rep(i,a,n) for(int i=a;i<n;i++)
#define rrep(i,n,a) for(int i=n;i>=a;i--)
#define FOR(i,n) for(int i=0;i<n;i++)
#define all(s) s.begin(),s.end()
#define vi vector<int>
#define pcnt(n) __builtin_popcount(n)
const int MOD = 1e9 + 7;
//const int MOD = 998244353;
const int INF = 1e18;
const double PI = acos(-1);

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,ans = 0;
    cin>>n;
    vi a(n),b(n);
    rep(i,0,n){
        cin>>a[i]>>b[i];
    }
    sort(all(a));
    sort(all(b));
    if(n&1){
        int ans = b[n/2] - a[n/2] + 1;
        cout<<ans<<endl;return 0;
    }
    else{
        int medmin = a[n/2] + a[n/2-1];
        int medmax = b[n/2] + b[n/2-1];
        int ans = medmax - medmin + 1;
        cout<<ans<<endl;return 0;
    }
}