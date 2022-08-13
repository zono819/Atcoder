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
const ll INF = 1e18;



signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,k,m=0,z=0,p=0,ans;
    cin>>n>>k;
    vector<int>a(n);
    rep(i,0,n){
        cin>>a[i];
        if(a[i]>0){p++;}
        else if(a[i]<0){m++;}
        else{z++;}
    }
    int M = p*m;
    int Z = z*(p+m);
    int P = p*(p-1) + m*(m-1);
    sort(all(a));
    if(k<=M){

    }
    else if(M+Z<k){

    }
    else{
        ans = 0;
    }
    cout<<ans<<endl;
}