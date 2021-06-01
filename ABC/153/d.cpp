#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f(ll h){
    if(h==1){return 1;}
    else{
        ll ret = 1+ 2*f(h/2);
        return ret;
        }
}
signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    ll h;
    cin>>h;
    ll ans = f(h);
    cout<<ans;
}