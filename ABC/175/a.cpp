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

signed main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    if(s=="RRS"||s=="SRR"){
        cout << 2 << endl;
    }
    else if(s=="RRR"){
        cout << 3 << endl;
    }
    else if(s=="SSS"){
        cout << 0 << endl;
    }
    else{
        cout << 1 << endl;
    }
    return 0;
}