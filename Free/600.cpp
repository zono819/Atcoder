#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    typedef long long ll;
    int n,k;
    ll am=0,sum=0,S,ans,ind;
    cin>>n>>k;
    ans=0;
    vector<int> a(n);
    for(int i=0;i<n;i++){cin>>a[i];sum+=a[i];}
    S=sum;
    for(int i=0;i<n;i++){
        while(S>=k){
            S-=a[i];
            ans++;
            ind=i;
        }

    }
}