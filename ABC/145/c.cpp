#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int frac(int n){
    int ret=1;
    while(n){
        ret*=n;
        n--;
    }
    return ret;
}
signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    double ans=0;
    vector<double> x(n),y(n);
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            double X=x[i]-x[j],Y=y[i]-y[j];
            ans+=sqrt(X*X+Y*Y);
        }
    }
    cout<<setprecision(20)<<ans*2/n;
}