#include<bits/stdc++.h>
using namespace std;
signed main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n,ans=0,sum=0;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<int,int> cnt;
    cnt[0]=1;
    for(int i=0;i<n;i++){
        sum+=a[i];
        ans+=cnt[sum];
        cnt[sum]++;
    }
    cout<<ans;
}