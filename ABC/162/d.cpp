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
    int n;
    string s;
    cin>>n>>s;
    int ans = 0,r=0,g=0,b=0;
    rep(i,0,n){
        if(s[i]=='R'){r++;}
        else if(s[i]=='G'){g++;}
        else{b++;}
    }
    ans+=r*b*g;
    rep(i,0,n){
        rep(j,1,n/2+1){
            if(i+2*j<n){
                if(s[i]!=s[i+j]&&s[i+j]!=s[i+2*j]&&s[i+2*j]!=s[i]){ans--;}
            }
        }
    }
    cout<<ans<<endl;
}