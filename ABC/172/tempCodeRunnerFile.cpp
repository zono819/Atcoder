#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> P;
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
    int n, m, k;
    cin >> n >> m >> k;
    vi a(n), b(m);
    rep(i, 0, n)
    {
        cin >> a[i];
    }
    rep(i, 0, m){
        cin >> b[i];
    }
    int ans = 0, sum = 0, ia = 0, ib = 0;
    while((sum+a[ia]<=k)&&(ia<n)){
        sum += a[ia];
        ia++;
    }
    ans = ia;
    while (ia>=0)
    {
        while ((sum+b[ib]<=k)&&(ib<m))
        {
            sum += b[ib];
            ib++;
        }
        ans = max(ans, ia + ib);
        ia--;
        sum -= a[ia];
    }
    cout << ans << endl;
}