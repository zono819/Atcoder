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

void ans(int l,int r,int n,string s)
{
    if((l==n)&&(r==n)){
        cout << s << endl;
    }
    else if(l==n){
        s += ")";
        ans(l, r + 1, n, s);
    }
    else if(l<n){
        ans(l + 1, r, n, s + "(");
        if(r<l)
        {
            ans(l, r + 1, n, s + ")");
        }
    }
}

signed main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    if(n%2)
    {
        return 0;
    }
    ans(0,0,n/2,"");
}