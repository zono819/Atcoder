#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> P;
typedef long long ll;
#define rep(i,a,n) for(int i=a;i<n;i++)
#define FOR(i,n) for(int i=0;i<n;i++)
const int MOD = 1e9 + 7;
//const int MOD = 998244353;
const int INF = 1e18;


signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,sum=0;
    cin>>n;
    vector<int>a(n);
    map<int,int>mp;
    rep(i,0,n){
        cin>>a[i];
        mp[a[i]]++;
    }
    for(auto i:mp){
        sum+=i.second*(i.second-1)/2;
    }
    
    rep(i,0,n){
        cout<<sum-mp[a[i]]+1<<endl;
    }
}