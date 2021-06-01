#include<bits/stdc++.h>
using namespace std;

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,h;
    cin>>h>>n;
    vector<int>a(n),b(n);
    int dp[101001];
    for(int i=0;i<101001;i++){dp[i]=1e9+7;}
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        dp[a[i]]=min(dp[a[i]],b[i]);
    }
    for(int i=0;i<100001;i++){
        for(int j=0;j<n;j++){
            dp[i+a[j]]=min(dp[i+a[j]],dp[i]+b[j]);
        }
    }
    cout<<dp[h];
}