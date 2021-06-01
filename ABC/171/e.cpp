#include<bits/stdc++.h>
using namespace std;
//#define int long long
typedef pair<int,int> P;
#define rep(i,a,n) for(int i=a;i<n;i++)
#define rrep(i,n,a) for(int i=n;i>=a;i--)
#define FOR(i,n) for(int i=0;i<n;i++)
#define all(s) s.begin(),s.end()
#define vi vector<int>
#define vvi vector<vector<int>>
#define pcnt(n) __builtin_popcount(n)
const double PI = acos(-1);

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    vi a(n),b(40,0);
    rep(i,0,n){
        cin>>a[i];
        int j=0;
        int tmp = a[i];
        while(tmp){
            b[j]^=tmp&1;
            tmp>>=1;
            j++;
        }
    }
    rep(i,0,n){
        int tmp = 0;
        rep(j,0,40){
            tmp+=b[j]*(1<<j);
        }
        cout<<(tmp^a[i])<<' ';
    }
}