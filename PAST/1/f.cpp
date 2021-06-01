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

vector<string> ans;

void solve(string s){
    int cnt = 0;
    string tmp = "";
    for(char c:s){
        if('A'<=c && c<='Z'){
            cnt++;
            c += 32;
        }
        if((cnt<2)){
            tmp += c;
        }
        else if(cnt==2){
            cnt = 0;
            tmp += c;
            ans.push_back(tmp);
            tmp = "";
        }
    }
    sort(ans.begin(), ans.end());
}

signed main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    solve(s);
    for (auto s:ans){
        s[0] -= 32;
        s[s.size() - 1] -= 32;
        cout << s;
    }
    return 0;
}