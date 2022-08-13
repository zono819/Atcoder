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
const int INF = 1e18;
const double PI = acos(-1);

vector<vector<int>>G(100000);
vector<int>c(100000,-1);

bool isBipartite(int s,int sgn){
    if(c[s]==-1){
        bool ret = true;
        c[s] = sgn;
        for(auto x:G[s]){
            if(c[s]==c[x]){return false;}
            else{
                ret&=isBipartite(x,1-sgn);
            }
        }
        return ret;
    }
    else{
        return true;
    }
}