#include<bits/stdc++.h>
using namespace std;

int n,k,ans,p=0,m=0;

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    
    string s;
    cin>>n>>k>>s;
    while(p<n){
        while(p<n&&s[p]=='1'){p++;}
        ans = max(ans,p-m);
        while(p<n&&s[p]=='0'){p++;}
        k--;
        if(k<0){
            while(m<n&&s[m]=='1'){m++;}
            while(m<n&&s[m]=='0'){m++;}
        }
        ans= max(ans,p-m);
    }
    cout<<ans<<endl;
}