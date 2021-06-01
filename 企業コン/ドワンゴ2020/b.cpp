#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 +7;
int frac(int n){
    int ret=1;
    while(n){
        ret=ret*n%MOD;
        n--;
    }
    return ret;
}
int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,mod;
    cin>>n;
    mod=frac(n-1);
    vector<int> x(n),csd(n-1);
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    for(int i=0;i<n-1;i++){
        csd[i]=x[i+1]-x[0];//距離の累積和
    }
}
