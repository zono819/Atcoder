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
    int n,k;
    cin>>n>>k;
    vi a(n);
    vi f(n,0);
    rep(i,0,n){
        cin>>a[i];
        a[i]--;
    }
    f[0]=1;
    int c = 0,now = 0,st;
    while(1){
        c++;
        now = a[now];
        f[now]++;
        if(f[now]==2){st = now;break;}
    }
    int len = 2,s=a[st];
    while(s!=st){
        s=a[s];
        len++;
    }
    cout<<len<<endl;
}