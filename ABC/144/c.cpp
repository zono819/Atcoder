#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    long long n,ans;
    cin>>n;
    ans=n+3;
    map<long,long> fac;
    for(long long i=1;i*i<=n;i++){
        if(n%i==0){fac.insert(make_pair(i,n/i));}
    }
    for(auto it=fac.begin();it!=fac.end();it++){
        long long a=(*it).first,b=(*it).second;
        if(a+b<ans){ans=a+b;}
    }
    cout<<ans-2;
}


