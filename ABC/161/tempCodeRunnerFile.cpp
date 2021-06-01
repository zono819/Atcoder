#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> P;
typedef long long ll;
#define rep(i,a,n) for(int i=a;i<n;i++)
#define FOR(i,n) for(int i=0;i<n;i++)
#define all(s) s.begin(),s.end()
#define lla(s) s.rbegin(),s.rend()
const int MOD = 1e9 + 7;
//const int MOD = 998244353;
const int INF = 1e18;


signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,m,sum=0;
    cin>>n>>m;
    vector<int>a(n);
    rep(i,0,n){
        cin>>a[i];
        sum+=a[i];
    }
    sort(lla(a));
    sum/=(4*m);
    cout<<(sum<=a[m-1]?"Yes":"No")<<endl;
}