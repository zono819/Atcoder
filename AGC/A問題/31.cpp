#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod =1000000007;
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    string s;
    int n,c;
    cin>>n>>s;
    ll ans=1;
    vector<int> a(26,1);
    for(int i=0;i<n;i++){
        c=(int)(s[i]-'a');
        a[c]++;
    }
    for(int i=0;i<26;i++){
        ans=ans*a[i]%mod;
    }
    cout<<ans-1;
}