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

int n,m,q,ans;
vector<int>a,b,c,d;
vector<vector<int>>vs;

void add(int n,int m,vector<int> &a){
    if(a.size()==n&&a.back()<=m){vs.push_back(a);}
    else{
        int st = (a.size()?a.back():1);
        for(int i=st;i<=m;i++){
            vector<int>b = a;
            b.push_back(i);
            add(n,m,b);
        }
    }
}

int val(vector<int>&A){
    int ret = 0;
    rep(i,0,q){
        if(A[b[i]-1] - A[a[i]-1] == c[i]){
            ret +=d[i];
        }
    }
    return ret;
}

void solve(){
    for(vector<int>x: vs){
        ans = max(ans,val(x));
    }
}

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    
    cin>>n>>m>>q;
    a.resize(q);
    b.resize(q);
    c.resize(q);
    d.resize(q);
    rep(i,0,q){
        cin>>a[i]>>b[i]>>c[i]>>d[i];
    }
    vector<int>v;
    add(n,m,v);
    solve();
    cout<<ans<<endl;
}