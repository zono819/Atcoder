#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,M,m;
    cin>>n;
    M=0;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>M){m=M;M=a[i];}
    }
    vector<int> b=a;
    sort(b.rbegin(),b.rend());
    for(int i=0;i<n;i++){
        if(a[i]==M){cout<<b[1]<<endl;}
        else{cout<<b[0]<<endl;}
    }
}