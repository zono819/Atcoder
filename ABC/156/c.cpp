#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans=100000001,cost;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int j=1;j<=100;j++){
        cost=0;
        for(int i=0;i<n;i++){
            cost+=(a[i]-j)*(a[i]-j);
        }
        ans=min(ans,cost);
    }
    cout<<ans;
}