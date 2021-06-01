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
    int n,m,q;
    cin>>n>>m>>q;
    vi t(200010,0);
    int l,r;
    rep(i,0,m){
        cin>>l>>r;
        t[l]++;t[r+1]--;
    }
    rep(i,1,200010){
        t[i]+=t[i-1];
    }
    int a,b;
    vi ans;
    rep(i,0,q){
        cin>>a>>b;
        ans.push_back(n-t[a-1]-t[b+1]);
    }
    for(int an:ans){
        cout<<an<<endl;
    }
}