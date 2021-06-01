#include<bits/stdc++.h>
using namespace std;
#define int long long
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
const int INF = 1e18;
const double PI = acos(-1);

map<int,int> pf(int N){
    map<int,int> ret;
    for(int i=2;i*i<=N;i++){
        while(N%i==0){
            ret[i]++;
            N/=i;
        }
    }
    if(N!=1){ret[N]++;}
    return ret;
}

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    map<int,int>m = pf(n);
    int ans = 0;
    for(auto x:m){
        ans += (-1 + sqrt(1+8*x.second))/2;
    }
    cout<<ans<<endl;
}