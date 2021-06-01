#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
long long gcd(long a,long b){
    if(a>b){swap(a,b);}
    if(a==0){return b;}
    else{return gcd(b%a,a);}
}

long long ord2(long long n){
    long long ret =0;
    while(n%2==0){
        n/=2;
        ret++;
    }
    return ret;
}
signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    long long n,m,ans=0,L=1,ord,d;
    cin>>n>>m;
    vector<long long>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ord=ord2(a[0]);
    d=1<<ord;
    for(int i=0;i<n;i++){
        if(ord!=ord2(a[i])){cout<<0;return 0;}
        a[i]/=d;
        L=(L/gcd(L,a[i]))*a[i];
    }
    L*=d/2;
    if(L>m||L<=0){cout<<0;return 0;}
    cout<<(m+L)/(2*L)<<endl;
    return 0;
}
