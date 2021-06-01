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
#define vi vector<int>
#define vvi vector<vector<int>>
#define pcnt(n) __builtin_popcount(n)
const int MOD = 1e9 + 7;
//const int MOD = 998244353;
const int INF = 1e18;
const double PI = acos(-1);

int v(string s){
    int ret = 0;
    for(char c:s){
        ret+=(c=='('?1:-1);
    }
    return ret;
}

bool ok(string s){
    int b = 0;
    for(char c:s){
        b+=(c=='('?1:-1);
        if(b<0){return false;}
    }
    return true;
}

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    vector<string>s(n);
    vector<pair<string,int>> p;
    rep(i,0,n){
        cin>>s[i];
        p.push_back({s[i],-v(s[i])});
    }
    std::sort(all(p));
    int sum = 0;
    string str = "";
    for(auto x:p){
        sum+=-x.second;
        str+=x.first;
    }
    cout<<(sum==0&&ok(str)?"Yes":"No");return 0;
}