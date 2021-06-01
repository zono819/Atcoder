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
#define pcnt(b) __builtin_popcount(b)
#define vi vector<int>
#define vvi vector<vector<int>>
const int MOD = 1e9 + 7;
//const int MOD = 998244353;
const ll INF = 1e18;


signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,k;
    cin>>n>>k;
    int a[n],bit[50]={};
    rep(i,0,n){
        cin>>a[i];
    }
    rep(i,0,n){
        rep(j,0,50){
            bit[j]+=((a[i]>>j)&1);
        }
    }
    int bitk[50];
    int t = k,i = 0;
    while(t){
        bitk[i]=((t>>i)&1);
    }
    int ans = 0;
}