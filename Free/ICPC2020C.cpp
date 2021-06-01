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
    while(1){
        int n;
        cin>>n;
        if(!n){
            break;
        }
        vector<int>a;
        for(int i=1;i*i*i<=n;i++){
            if(n%i==0){
                a.emplace_back(i);
            }
        }
        int ans = 1e15;
        for(auto i:a){
            int m = n/i;
            int tmp = 1e15;
            for(int j=1;j*j<=m;j++){
                tmp = min(tmp,j+m/j);
            }
            tmp+=i;
            ans=min(ans,tmp);
        }
        cout<<ans<<endl;
    }
    return 0;
}