#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> P;
typedef long long ll;
#define rep(i,a,n) for(int i=a;i<n;i++)
#define rrep(i,n,a) for(int i=n;i>=a;i--)
#define FOR(i,n) for(int i=0;i<n;i++)
#define all(s) s.begin(),s.end()
#define lla(s) s.rbegin(),s.rend()
const int MOD = 1e9 + 7;
//const int MOD = 998244353;
const ll INF = 1e18;


signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,q;
    cin>>n;
    int d[n+1][n+1];
    memset(d,0,sizeof(d));
    rep(i,1,n+1){
        rep(j,1,n+1){
            cin>>d[i][j];
        }
    }
    cin>>q;
    vector<int>p(q);
    rep(i,0,q){
        cin>>p[i];
    }
    vector<int>t(2510,0);
    rep(i,2,n+1){
        d[0][i]+=d[0][i-1];
        d[i][0]+=d[i-1][0];
    }
    rep(i,1,n+1){
        rep(j,1,n+1){
            d[i][j] = d[i][j-1] + d[i-1][j] - d[i-1][j-1] + d[i][j];
        }
    }
    rep(i,1,n+1){
        rep(j,1,n+1){
            rep(k,i,n+1){
                rep(l,j,n+1){
                    int s = (k-i+1)*(l-j+1);
                    t[s] = max(t[s],d[k][l] - d[k][j-1] - d[i-1][l] + d[i-1][j-1]);
                }
            }
        }
    }
    int tmp = 0;
    rep(i,0,2510){
        t[i] = max(t[i],tmp);
        tmp = max(t[i],tmp);
    }
    rep(i,0,q){
        cout<<t[p[i]]<<endl;
    }
}