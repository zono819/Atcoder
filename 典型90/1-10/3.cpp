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

int n,depth=0;
vvi v(100010);
vi val(100010, -1);
void dep(int cur)
{
    for(auto vr : v[cur])
    {
        if(val[vr]==-1){
            val[vr]=val[cur]+1;
            dep(vr);
        }
        depth = max(depth, val[cur]);
    }
}

signed main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cin >> n;
    rep(i,0,n-1)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        v[a].emplace_back(b);
        v[b].emplace_back(a);
    }
    val[0] = 0;
    dep(0);
    int s;
    rep(i,0,n){
        if(val[i]==depth){
            s = i;
            break;
        }
    }
    depth = 0;
    rep(i,0,n){
        val[i] = -1;
    }
    val[s] = 0;
    dep(s);
    cout << depth + 1 << endl;
}