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
#define vp vector<pair<int,int>>
const int MOD = 1e9 + 7;
//const int MOD = 998244353;
const ll INF = 1e18;


signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,tmp,now;
    cin>>n;
    tmp = n;
    int r = 0;
    now = 1;
    for(int i=0;;i++){
        if(now<=n+1&&n+1<now*2){
            r=i%2;break;
        }
        now*=2;
    }
    now=1;
    for(int i=0;;i++){
        if(i%2==r){now = now*2+1;}
        else{now*=2;}
        if(now>n){
            r=i%2;break;
        }
    }
    if(r){cout<<"Takahashi"<<endl;}
    else{
        cout<<"Aoki"<<endl;
    }
}