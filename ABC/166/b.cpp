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
    int n,k,a;
    cin>>n>>k;
    int d;
    vi s(n,0);
    rep(i,0,k){
        cin>>d;
        rep(j,0,d){
            cin>>a;
            a--;
            s[a]++;
        }
    }
    int ans = 0;
    rep(i,0,n){
        if(s[i]==0){ans++;}
    }
    cout<<ans<<endl;
}