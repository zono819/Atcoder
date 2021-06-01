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
    string s;
    cin>>s;
    int n=s.length();
    string t = s;
    reverse(t.begin(),t.end());
    if(s!=t){cout<<"No"<<endl;return 0;}
    string u1 = s.substr(0,(n-1)/2);
    string u2 = u1;
    reverse(u2.begin(),u2.end());
    if(u1!=u2){cout<<"No"<<endl;return 0;}
    string v1 =s.substr((n+1)/2,(n-1)/2);
    string v2 = v1;
    reverse(v2.begin(),v2.end());
    if(v1!=v2){cout<<"No"<<endl;return 0;}
    cout<<"Yes"<<endl;return 0;
}