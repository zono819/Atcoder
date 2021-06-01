#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,t;
    string x;
    cin>>n;
    string s;
    vector<string> m(n+1);
    vector<int> cs(n+1);
    cs[0]=0;
    for(int i=1;i<n+1;i++){
        cin>>m[i]>>t;
        cs[i]=cs[i-1]+t;
    }
    cin>>x;
    for(int i=1;i<=n;i++){
        if(x==m[i]){cout<<cs[n]-cs[i];return 0;}
    }
}
