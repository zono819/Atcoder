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

int gcd(int a,int b){
    if(a>b){swap(a,b);}
    if(a==0){return b;}
    else{return gcd(b%a,a);}
}

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,k,ans;
    cin>>n>>k;
    if(n<k){ans=min(k-n,n);}
    else if(n%k==0){
        ans = 0;
    }
    else{
        ans=min(abs(n%k-k),n%k);
    }
    cout<<ans<<endl;
}