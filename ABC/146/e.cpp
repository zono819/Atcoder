#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,k;
    ll ans=0;
    cin>>n>>k;
    vector<long long>a(n),cs(n+1);
    map<int,int>val;
    cs[0]=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        cs[i+1]=a[i]+cs[i];
    }
    val[0]=0;
    for(int i=0;i<n+1;i++){
        cs[i]=(cs[i]-i)%k;
        val[cs[i]]++;
        ans+=val[cs[i]]-1;
        cout<<cs[i]<<endl;
    }
    cout<<ans;
}