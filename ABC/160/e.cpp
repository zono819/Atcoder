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
    int x,y,a,b,c,ans=0;
    cin>>x>>y>>a>>b>>c;
    vector<int>p(a),q(b),r(c),xy={};
    rep(i,0,a){
        cin>>p[i];
    }
    rep(i,0,b){
        cin>>q[i];
    }
    rep(i,0,c){
        cin>>r[i];
    }
    sort(lla(p));
    sort(lla(q));
    sort(lla(r));
    rep(i,0,x){
        xy.push_back(p[i]);
        ans+=p[i];
    }
    rep(i,0,y){
        xy.push_back(q[i]);
        ans+=q[i];
    }
    sort(all(xy));
    int ind=0,ic=0;
    while(ind<x+y){
        if(r[ic]>xy[ind]){ans=ans-xy[ind]+r[ic];ind++;ic++;}
        else{break;}
    }
    cout<<ans<<endl;
}
