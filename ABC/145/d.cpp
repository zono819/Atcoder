#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD=1000000007;
ll fact(ll n){
  if(n==0){return 1;}
  return fact((n-1)%MOD)*n%MOD;
}

ll power(ll a,ll b){
  ll res=1;
  while(b>0){
    if(b&1) res=res*a%MOD;
    a=a*a%MOD;
		b>>=1;
	}
  return res;
}
ll factinv(ll a){
	ll res=power(fact(a),MOD-2);
	return res;
}

ll comb(ll n, ll r){
  ll res;
  if(n<0||r<0||n<r){res=0;}
  else{res=(fact(n)*factinv(r))%MOD*factinv(n-r)%MOD;}
  return res;
}


signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int X,Y,m,n;
    cin>>X>>Y;
    if((2*Y-X)%3!=0||(2*X-Y)%3!=0){cout<<0;return 0;}
    else{
         n=(2*Y-X)/3;
         m=(2*X-Y)/3;
         cout<<comb(n+m,m);
    }
}