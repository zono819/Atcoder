#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> P;
typedef long long ll;
#define rep(i,a,n) for(int i=a;i<n;i++)
#define FOR(i,n) for(int i=0;i<n;i++)
#define all(s) s.begin(),s.end()
const int MOD = 1e9 + 7;
//const int MOD = 998244353;
const int INF = 1e18;


signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int k,n;
    cin>>k>>n;
    vector<int>a(n);
    rep(i,0,n){
        cin>>a[i];
    }
    int ans = INF;
    rep(i,0,n-1){
        ans = min(ans,k-(a[i+1]-a[i]));
    }
    ans=min(ans,a[n-1]-a[0]);
    cout<<ans<<endl;
}