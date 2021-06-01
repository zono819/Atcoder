#include<bits/stdc++.h>
using namespace std;
int keta(long long n){
    int ret=0;
    while(n){
        ret++;
        n/=10;
    }
    return ret;
}
signed main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long n,N,ans;
    cin>>n;
    bool b=false;
    N=n;
    vector<int>d(keta(n));
    for(int i=0;i<keta(n);i++){
        d[keta(n)-1-i]=N%10;
        N/=10;
    }
    for(int i=1;i<keta(n);i++){
        if(d[i]!=9){b=true;break;}
    }
    if(b){ans=d[0]-1+(keta(n)-1)*9;}
    else{ans=d[0]+(keta(n)-1)*9;}
    cout<<ans;
}