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


signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,k;
    string s;
    cin>>n>>k>>s;
    int ans = 0,count = 1;
    vector<int>a;
    rep(i,0,n-1){
        if(s[i]!=s[i+1]){a.push_back(count);count=1;}
        else{count++;}
    }
    a.push_back(count);
    if(a.size()<=2*k-1){cout<<n<<endl;}
    else{
        int start = (s[0]=='1'?0:1),sum=0,ans=0;
        rep(i,1,a.size()){
        a[i]+=a[i-1];
        }
        for(int i=start;i+2*k<a.size();i+=2){
            ans=max(ans,a[i+2*k]-a[i]+1);
        }
        cout<<ans<<endl;
    }
}