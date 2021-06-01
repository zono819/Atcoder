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
#define pcnt(b) __builtin_popcount(b)
const int MOD = 1e9 + 7;
//const int MOD = 998244353;
const ll INF = 1e18;


int ax,ay,bx,by,n;
vector<int>x,y;
int OuterProduct(int ax, int ay, int bx, int by){
    return (ax * by - ay * bx);
}
bool Crossing(int i){
    int x0 = ax - x[i], y0 = ay - y[i];
    int x1 = bx - x[i], y1 = by - y[i];
    int x2 = ax - x[i+1], y2 = ay - y[i+1];
    int x3 = bx - x[i+1], y3 = by - y[i+1];
    bool f1 = (OuterProduct(x0,y0,x1,y1)*OuterProduct(x2,y2,x3,y3) < 0);
    x0 = x[i] - ax, y0 = y[i] - ay;
    x1 = x[i+1] - ax, y1 = y[i+1] - ay;
    x2 = x[i] - bx, y2 = y[i] - by;
    x3 = x[i+1] - bx, y3 = y[i+1] - by;
    bool f2 = (OuterProduct(x0,y0,x1,y1)*OuterProduct(x2,y2,x3,y3) < 0);
    return (f1&&f2);
}

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cin>>ax>>ay>>bx>>by>>n;
    x.resize(n+1);y.resize(n+1);
    rep(i,0,n){
        cin>>x[i]>>y[i];
    }
    x[n]=x[0];
    y[n]=y[0];
    int cross = 0;
    rep(i,0,n){
        int x0 = ax - x[i], y0 = ay - y[i];
        int x1 = bx - x[i], y1 = by - y[i];
        int x2 = ax - x[i+1], y2 = ay - y[i+1];
        int x3 = bx - x[i+1], y3 = by - y[i+1];
        if(Crossing(i)){cross++;}
    }
    cout<<(cross/2+1)<<endl;
}