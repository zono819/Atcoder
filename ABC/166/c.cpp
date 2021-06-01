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

int ans;
vi h(100010);
vvi c(100010);


signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,m,a,b;
    cin>>n>>m;
    
    rep(i,0,n){
        cin>>h[i];
    }
    rep(i,0,m){
        cin>>a>>b;
        a--;b--;
        c[a].push_back(b);
        c[b].push_back(a);
    }
    rep(i,0,n){
        bool ok = true;
        for(auto x:c[i]){
            if(h[x]>=h[i]){ok=0;break;}
        }
        if(ok){ans++;}
    }
    cout<<ans<<endl;
}