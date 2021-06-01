#include<bits/stdc++.h>
using namespace std;

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,k;
    long long ans=0;
    cin>>n>>k;
    vector<int>h(n);
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    if(k>=n){cout<<0;return 0;}
    sort(h.begin(),h.end());
    for(int i=0;i<n-k;i++){
        ans+=h[i];
    }
    cout<<ans;
}