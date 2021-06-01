#include<bits/stdc++.h>
using namespace std;
signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n;
    long long sum=0,m;
    cin>>n;
    vector<long long> a(n),cs(n+1);
    cs[0]=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        cs[i+1]=a[i]+cs[i];
        sum+=a[i];
    }
    m=sum;
    for(int i=1;i<n;i++){
        if(abs(sum-2*cs[i])<m){
            m=abs(sum-2*cs[i]);
        }
    }
    cout<<m;
}