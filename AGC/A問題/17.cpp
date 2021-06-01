#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
const int mod =1000000007;
const int INF = 1e18;
signed main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n,p,ecount=0;
    cin>>n>>p;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){ecount++;}
    }
    if(p==1&&ecount==n){cout<<0;return 0;}
    else if(p==0&&ecount==n){cout<<(int)pow(2,n);return 0;}
    else{cout<<(int)pow(2,n-1);}
}