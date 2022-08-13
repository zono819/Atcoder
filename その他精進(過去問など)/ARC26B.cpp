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

vector<int> divisors(int n){
    vector<int> ret;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            ret.push_back(i);
            if(i*i!=n){ret.push_back(n/i);}
            }
    }
    sort(ret.begin(),ret.end());//optional
    return ret;
}

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    vi d = divisors(n);
    int sum = 0;
    rep(i,0,(int)d.size()){
        sum+=d[i];
    }
    string ans;
    if(sum==2*n){ans = "Perfect";}
    else if(sum<2*n){ans = "Deficient";}
    else{ans = "Abundant";}
    cout<<ans<<endl;
}