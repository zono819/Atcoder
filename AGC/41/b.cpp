#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=a;i<n;i++)
signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,m,v,p,pth,ans=0;
    cin>>n>>m>>v>>p;
    vector<int> a(n);
    rep(i,0,n){
        cin>>a[i];
    }
    sort(a.rbegin(),a.rend());
    pth=a[p-1];
    if(v<p){
        rep(i,p,n){
            a[i]+=m;
        }
        rep(i,0,n){
            if(a[i]>=pth){ans++;}
        }
        cout<<ans;
        return 0;
    }
    else if(v>=p){
        rep(i,0,n){
            if(a[i]==pth){p=i+1;break;}
            else{continue;}
        }
        rep(i,0,n){
            if(n-i+p>=v&&a[i]+m>=pth){ans++;}
        }
        cout<<ans;return 0;
    }
}