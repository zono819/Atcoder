#include<bits/stdc++.h>
using namespace std;
const int mod=998244353;
typedef long long ll;
signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,k;
    cin>>n>>k;
    if(n-2*k+1<0){cout<<-1;return 0;}
    else{
        for(int i=0;i<n;i++){
            cout<<k+2*i<<' '<<k+2*n-i-1<<' '<<k+2*n+i<<endl;
        }
    }
}