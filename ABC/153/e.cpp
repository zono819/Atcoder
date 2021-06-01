#include<bits/stdc++.h>
using namespace std;

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    long long n,h,A,B;
    cin>>h>>n;
    vector<long long>a(n),b(n);
    long long dp[20001];
    for(int i=0;i<20001;i++){dp[i]=1e9+7;}
    dp[0]=0;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        A=a[i];B=b[i];
        while(A<20001){
        dp[A]=min(dp[A],B);
        A+=a[i];B+=b[i];
        }
    }
    for(int i=0;i<20001;i++){
        for(int j=0;j<n;j++){
            if(i+a[j]<20001)dp[i+a[j]]=min(dp[i+a[j]],dp[i]+b[j]);
            else{continue;}
        }
    }
    while(dp[h]==1e9+7){h++;}
    cout<<dp[h];
}