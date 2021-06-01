#include<bits/stdc++.h>
using namespace std;
int ord(int n){
    int ret=0;
    while(n){
        n/=10;
        ret++;
    }
    return ret;
}

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,b,t;
    long long ans=0;
    cin>>n;
    int d[10][10];
    memset(d,0,sizeof(d));
    for(int i=1;i<=n;i++){
        b=i%10;
        t=i/((int)pow(10,ord(i)-1));
        d[t][b]++;
    }
    for(int i=1;i<10;i++){
        for(int j=1;j<10;j++){
            ans+=d[i][j]*d[j][i];
        }
    }
    cout<<ans;
}