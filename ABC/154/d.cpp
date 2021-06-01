#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,k;
    double x;
    double ans=0,now,prev;
    cin>>n>>k;
    vector<double> p(n);
    for(int i=0;i<n;i++){
        cin>>x;
        p[i]=(x+1.0)/2.0;
    }
    for(int i=0;i<k;i++){
        now+=p[i];
    }
    ans = now;
    for(int i=1;i+k-1<n;i++){
        prev = now;
        now-=p[i-1];
        now+=p[i+k-1];
        ans=max(ans,now);
    }
    cout<<setprecision(10)<<ans<<endl;
}