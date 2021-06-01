#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,a,n) for(int i=a;i<n;i++)
#define all(s) s.begin(),s.end()
#define lla(s) s.rbegin(),s.rend()
#define vi vector<int>

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int x,y,z,k;
    cin>>x>>y>>z>>k;
    vi a(x),b(y),c(z);
    rep(i,0,x){cin>>a[i];}
    rep(i,0,y){cin>>b[i];}
    rep(i,0,z){cin>>c[i];}
    sort(lla(a));
    sort(lla(b));
    sort(lla(c));
    vi d;
    rep(i,0,x){
        rep(j,0,y){
            d.push_back(a[i]+b[j]);
        }
    }
    sort(lla(d));
    vi e;
    for(int i=0;i<min(k,(int)d.size());i++){
        rep(j,0,z){
            e.push_back(d[i]+c[j]);
        }
    }
    sort(lla(e));
    rep(i,0,k){
        cout<<e[i]<<'\n';
    }
}