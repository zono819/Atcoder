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

int totient(int n)
{
    int tmp = n;
    map<int, int> pf;
    for (int i = 2; i * i <= tmp; i++)
    {
        if (tmp % i == 0)
        {
            while (tmp % i == 0)
            {
                pf[i]++;
                tmp /= i;
            }
        }
    }
    if (tmp != 1)
    {
        pf[tmp]++;
    }
    for (auto p : pf)
    {
        n = n / (p.first) * (p.first - 1);
    }
    return n;
}

signed main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    if(__gcd((long long)(10),n)>1){
        cout << -1 << endl;
        return 0;
    }
    else{
        int st = 7, cnt = 1;
        while((st%n)!=0){
            st = (st * 10 + 7)%n;
            cnt++;
        }
        cout << cnt << endl;
    }
}