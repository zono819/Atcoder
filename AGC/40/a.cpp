#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    string s;
    cin>>s;
    int n=s.size();
    ll ans=0;
    vector<int>a(n+1,0);
    rep(i,n){
        if(s[i]=='<'){a[i+1]=a[i]+1;}
    }
    for(int i=n-1;i>=0;i--){
        if(s[i]=='>'){a[i]=max(a[i],a[i+1]+1);}
    }
    rep(i,n+1){ans+=a[i];}
    cout<<ans;
}