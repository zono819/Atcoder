#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    string s;
    ll n,ans=0,t=0;
    cin>>s;
    n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='W'){ans+=i-t;t++;}
    }
    cout<<ans;
}