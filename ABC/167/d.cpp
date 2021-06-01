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

vi a(200010);
vector<bool>visited(200010,0);

int looplen(int s){
    int u;
    while(1){
        if(visited[s]){u=s;break;}
        else{visited[s] = 1;s = a[s];}
    }
    int ret = 1;
    int t = a[s];
    while(t!=s){
        ret++;
        t = a[t];
    }
    return ret;
}

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,k;
    cin>>n>>k;
    rep(i,0,n){cin>>a[i];a[i]--;}
    if(a[0]==0){cout<<1;return 0;}
    k = k%looplen(0);
    int s = 0;
    while(k){
        s = a[s];
        k--;
    }
    cout<<s+1<<endl;
}