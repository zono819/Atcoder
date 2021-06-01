#include<bits/stdc++.h>
using namespace std;
int n;
long long k,c=0;
vector<long long> a,f;
bool F(long long product){
    long long ret=0;
    for(int i=0;i<n;i++){
        long long t=product/f[i];
        if(a[i]>t){ret+=a[i]-t;}
    }
    return (ret<=k);
}
int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    long long high=1e12,low=-1;
    cin>>n>>k;
    a.resize(n);
    f.resize(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>f[i];
    }
    sort(a.begin(),a.end());
    sort(f.rbegin(),f.rend());
    while(high-low>1){
        long long m=(high+low)/2;
        if(F(m)){high=m;}
        else{low=m;}
    }
    cout<<high;
}
