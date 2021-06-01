#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> P;
typedef long long ll;
#define rep(i,a,n) for(int i=a;i<n;i++)
#define FOR(i,n) for(int i=0;i<n;i++)
const int MOD = 1e9 + 7;
const int INF = 1e18;


signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int h,w;
    cin>>h>>w;
    if(h==1||w==1){cout<<1;}
    else if(h%2==0||w%2==0){cout<<h*w/2<<endl;}
    else{
        cout<<h*w/2+1<<endl;
    }
    
}