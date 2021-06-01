#include<bits/stdc++.h>
using namespace std;
int n,t,dp[3010][3010],w[3010],v[3010],flag[3010];

int rec(int i,int j){
    if(dp[i][j]>=0){
        return dp[i][j];
    }
    int res;

    if(i==n){
        res=0;
    }
    else if(j<w[i]){
        res = rec(i+1,j);
    }
    else{
        res=max(rec(i+1,j),v[i]+rec(i+1,j-w[i]));
        if(rec(i+1,j)<v[i]+rec(i+1,j-w[i])){flag[i]*=0;}
    }
    return dp[i][j]=res;
}
signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cin>>n>>t;
    int ans1,ans2,inc=0;
    for(int i=0;i<n;i++){
        cin>>w[i]>>v[i];
    }
    memset(flag,-1,sizeof(flag));
    memset(dp,-1,sizeof(dp));
    ans1=rec(0,t);
    memset(flag,-1,sizeof(flag));
    memset(dp,-1,sizeof(dp));
    ans2=rec(0,t-1);
    for(int i=0;i<n;i++){
        cout<<flag[i]<<endl;
        if(flag[i]==-1&&v[i]>inc){
            inc=v[i];
        }
    }
    cout<<endl;
    cout<<inc<<endl;
    ans2+=inc;
    cout<<max(ans1,ans2);
}