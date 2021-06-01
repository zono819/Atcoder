#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    long long ans=0;
    cin>>n>>x;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        if(a[i]>x){ans+=a[i]-x;a[i]=x;}
        if(a[i]+a[i+1]>x){
            ans+=a[i]+a[i+1]-x;
            a[i+1]=x-a[i];
            }
    }
    cout<<ans;
}