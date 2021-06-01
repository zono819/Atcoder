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

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    if(n&1){
        rep(i,1,m+1){
            cout<<i<<' '<<n-i<<endl;
        }
    }else{
        int count = 0;
        int a = 1, b = n/2;
        while(a<b&&count<m){
            cout<<a%(n+1)<<' '<<b<<endl;
            a++;b--;
            count++;
        }
        int c = n/2 + 1, d = n-1;
        while(c<d&&count<m){
            cout<<c<<' '<<d<<endl;
            c++;d--;
        }
    }
}