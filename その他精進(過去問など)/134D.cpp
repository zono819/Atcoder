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
#define vp vector<pair<int,int>>
const int MOD = 1e9 + 7;
//const int MOD = 998244353;
const ll INF = 1e18;


signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,m=0;
    cin>>n;
    vi a(n+1),b(n+1,0),ans;
    rep(i,1,n+1){cin>>a[i];}
    rrep(i,n+1,1){
        int tmp = 0;
        for(int j = i;j <= n;j+=i){
            tmp += b[j];
        }
        if((tmp%2)!=a[i]){b[i]=1;m++;ans.push_back(i);}
    }
    cout<<m<<'\n';
    rep(i,0,m){
        cout<<ans[i];
        if(i!=m-1)cout<<' ';
    }
}