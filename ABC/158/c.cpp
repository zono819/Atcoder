#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,a,n) for(int i=a;i<n;i++)
typedef pair<int,int> P;
typedef long long ll;
signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int a,b;
    cin>>a>>b;
    rep(i,1,20000){
        if(i*2/25==a&&i/10==b){
            cout<<i;return 0;
        }
    }
    cout<<-1;return 0;
}