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
const int MOD = 1e9 + 7;
//const int MOD = 998244353;
const ll INF = 1e18;

double tmp[1010],p[1010],w[1010];
double low = 0.0, high = 100.0;
int n,k;

void solve(){
    double m = (low + high)/2.0;
    rep(i,0,n){
        tmp[i] = w[i]*(p[i]-m);
    }
    sort(tmp,tmp+n);
    reverse(tmp,tmp+n);
    double sum = 0;
    rep(i,0,k){
        sum += tmp[i];
    }
    if(sum > 0.0){low = m;}
    else{high = m;}
}

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cin>>n>>k;
    rep(i,0,n){
        cin>>w[i]>>p[i];
    }
    FOR(_,30)solve();
    cout<<setprecision(20)<<low<<endl;
}