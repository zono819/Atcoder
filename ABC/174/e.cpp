#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int, int> P;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define rrep(i, n, a) for (int i = n; i >= a; i--)
#define FOR(i, n) for (int i = 0; i < n; i++)
#define all(s) s.begin(), s.end()
#define vi vector<int>
#define vvi vector<vector<int>>
#define pcnt(n) __builtin_popcount(n)
const int MOD = 1e9 + 7;
//const int MOD = 998244353;
const int INF = 1e18;
const double PI = acos(-1);

//にぶたんやろ

signed main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n, k;
    cin >> n >> k;
    vector<double> a(n);
    rep(i,0,n){
        cin >> a[i];
    }
    double m = 0.0;
    double M = 1000000000.0;
    double eps = 1e-6;
    while(M-m > eps){
        int times = 0;
        double val = (m + M) / 2.0;
        for(auto i:a){
            times += (int)(i / val);
        }
        if(times > k){
            m = val;
        }
        else{
            M = val;
        }
    }
    cout << setprecision(20) << ceil(m) << endl;
}