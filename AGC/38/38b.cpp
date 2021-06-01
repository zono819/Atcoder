#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,count=0,f=1;
    long long ans;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        if(a[i]<a[i+1]){f++;}
        else{f=1;}
        if(f>=k){count++;}
    }
    cout<<n-k-count+1;
}