#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> P;
typedef long long ll;
#define rep(i,a,n) for(int i=a;i<n;i++)
#define FOR(i,n) for(int i=0;i<n;i++)
#define all(s) s.begin(),s.end()
const int MOD = 1e9 + 7;
//const int MOD = 998244353;
const int INF = 1e18;

int ans,A,B,C;
void dfs(int a,int b,int c,int n){
    if(!(a>=b&&b>=c))return;
    if(a>A||b>B||c>C)return;
    if(n==0){ans++;}
    else{
        dfs(a+1,b,c,n-1);
        dfs(a,b+1,c,n-1);
        dfs(a,b,c+1,n-1);
    }
}


signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cin>>A>>B>>C;
    dfs(0,0,0,A+B+C);
    cout<<ans<<endl;
}