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
const int MOD = 1e9 + 7;
//const int MOD = 998244353;
const ll INF = 1e18;


signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int cnt = 0,ans = 0;
    string s;
    cin>>s;
    int n = s.length();
    rep(i,0,n){
        if(s[i]=='p'&&cnt > 0){
            cnt--;
        }
        else if(s[i]=='p'&&cnt<=0){
            cnt++;ans--;
        }
        else if(s[i]=='g'&&cnt>0){
            cnt--;ans++;
        }
        else{
            cnt++;
        }
    }
    cout<<ans<<endl;
}