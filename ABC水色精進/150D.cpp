#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define int long long

int ord2(int n){
    int ret =0;
    while(n%2==0){
        n/=2;
        ret++;
    }
    return ret;
}
signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,m,ans=0,L=1,ord,d;
    cin>>n>>m;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ord=ord2(a[0]);
    d=(1<<ord);
    for(int i=0;i<n;i++){
        if((a[i]/d)%2==0){cout<<0<<endl;return 0;}
        a[i]/=d;
        int tmp =(L/__gcd(L,a[i]))*a[i];
        if(tmp<0||L>tmp){cout<<0<<endl;return 0;}
        else{L = tmp;}
    }
    L*=d/2;
    if((L>m)||(L<=0)){cout<<0;return 0;}
    cout<<(m+L)/(2*L)<<endl;
    return 0;
}
