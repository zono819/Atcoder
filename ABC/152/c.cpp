#include<bits/stdc++.h>
using namespace std;
signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,ans=0,m;
    cin>>n;
    m=n+2;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(m>a[i]){ans++;}
        m=min(m,a[i]);
    }
    cout<<ans;
}