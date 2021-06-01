#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,ans=0,N;
    cin>>n;
    N=n;
    for(long long i=1;i*i<=n;i++){
        if(n%i==0&&i<n/i-1){ans+=n/i-1;}
    }
    cout<<ans;
}