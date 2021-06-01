#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> P;
typedef long long ll;
#define rep(i,a,n) for(int i=a;i<n;i++)
#define rrep(i,n,a) for(int i=n;i>=a;i--)
#define FOR(i,n) for(int i=0;i<n;i++)
#define all(s) s.begin(),s.end()
#define vi vector<int>
#define vvi vector<vector<int>>
#define pcnt(n) __builtin_popcount(n)
const int MOD = 1e9 + 7;
//const int MOD = 998244353;
const int INF = 1e18 + 1;
const double PI = acos(-1);

int pw(int a, int x) {
    if (x == 0) return 1;
    int b = pw(a, x / 2);
    b = (b * b) % MOD;
    if (x % 2)
        return (a * b) % MOD;
    return b;
}

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,a,b,zeros = 0;
    cin>>n;
    map<P,int>m;
    rep(i,0,n){
        cin>>a>>b;
        if(a==0&&b==0){zeros++;}
        else if(a==0){m[{0,1}]++;}
        else{
            int g = __gcd(a,b);
            a = a/g;
            b = b/g;
            if(b<0){a*=-1;b*=-1;}
            m[{a,b}]++;
        }
    }
    int ans = 0;
    ans+=zeros;
    int prod = 1;
    for(auto p:m){
        int x = p.first.first,y = p.first.second;
        if(m.count({x,y})==0){continue;}
        else{
            if(m.count({-x,y})){prod*=(pw(2,m[{x,y}])-1+pw(2,m[{-x,y}]));m.erase({-x,y});m.erase({x,y});}
            else{prod*=pw(2,m[{x,y}])-1;}
            prod%=MOD;
        }
    }
    ans+=prod;
    cout<<(ans-1)%MOD<<endl;
}