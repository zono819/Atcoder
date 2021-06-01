#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> P;
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
    int n,q,sum=0;
    cin>>n;
    vi a(n);
    map<int,int>m;
    rep(i,0,n){cin>>a[i];m[a[i]]++;sum+=a[i];}
    cin>>q;
    rep(i,0,q){
        int b,c;
        cin>>b>>c;
        if(m[b]){
            sum=sum-b*m[b]+c*m[b];
            m[c]+=m[b];
            m[b]=0;
        }
        cout<<sum<<endl;
    }
}