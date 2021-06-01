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

int c[110][110],h,w;
vector<int>a(10010);
void solve(int n){
    int x=0,y=0;
    bool dir = true;
    rep(l,0,n){
        int num = a[l];
        while(num){
            if(dir){
                c[x][y]=l+1;
                if(x<h-1){x++;}
                else{y++;dir=false;}
                }
            else{
                c[x][y]=l+1;
                if(x>0){x--;}
                else{y++;dir=true;}
            }
            num--;
        }
    }
}


signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n;
    cin>>h>>w>>n;
    rep(i,0,n){
        cin>>a[i];
    }
    solve(n);
    rep(i,0,h){
        rep(j,0,w){
            cout<<c[i][j]<<' ';
        }
        cout<<endl;
    }
}