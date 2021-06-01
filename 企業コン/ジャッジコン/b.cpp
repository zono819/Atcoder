#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> P;
typedef long long ll;
#define rep(i,a,n) for(int i=a;i<n;i++)
#define FOR(i,n) for(int i=0;i<n;i++)
#define all(s) s.begin(),s.end()
const int MOD = 1e9 + 7;
//const int MOD = 998244353;
const int INF = 1e18;


signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,x;
    cin>>n;
    char c;
    vector<int>red,blue;
    rep(i,0,n){
        cin>>x>>c;
        if(c=='R'){red.push_back(x);}
        else{blue.push_back(x);}
    }
    sort(all(red));
    sort(all(blue));
    rep(i,0,(int)red.size()){
        cout<<red[i]<<endl;
    }
    rep(i,0,(int)blue.size()){
        cout<<blue[i]<<endl;
    }

}