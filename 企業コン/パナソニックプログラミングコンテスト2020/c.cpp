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
    int a,b,c;
    cin>>a>>b>>c;
    if(c<a+b){cout<<"No";return 0;}
    else{
        cout<<(4*a*b<(c-a-b)*(c-a-b)?"Yes":"No")<<endl;
    }
}