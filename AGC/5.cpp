#include<bits/stdc++.h>
using namespace std;
signed main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    string x;
    int n,s=0,t=0,minus=0;
    cin>>x;
    n=x.size();
    for(int i=0;i<n;i++){
        if(x[i]=='S'){s++;}
        else if(s>0){s--;minus+=2;}
    }
    cout<<n-minus;
}