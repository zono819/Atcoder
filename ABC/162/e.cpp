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
const int MOD = 1e9 + 7;
//const int MOD = 998244353;
const ll INF = 1e18;

int G[100010]={};


int pw(int a, int st) {
    if (st == 0) return 1;
    int b = pw(a, st / 2);
    b = (b * b) % MOD;
    if (st % 2)
        return (a * b) % MOD;
    return b;
}

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,k;
    cin>>n>>k;
    rrep(i,k,1){
        int tmp = pw(k/i,n)%MOD;
        for(int j = i + i;j <= k;j+=i){
            tmp = (tmp-G[j])%MOD;
        }
        G[i] = tmp%MOD;
    }
    int ans = 0;
    rep(i,1,k+1){
        ans += i*G[i]%MOD;
        ans%=MOD;
    }
    cout<<ans<<endl;
}