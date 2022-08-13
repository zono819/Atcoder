#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=a;i<n;i++)

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    vector<int>a(n);
    rep(i,0,n){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int c = 1;
    rep(i,1,n){
        if(a[i]!=a[i-1]){c++;}
    }
    int ans = (c%2?c:c-1);
    cout<<ans<<endl;
}