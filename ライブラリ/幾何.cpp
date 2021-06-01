#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> P;
typedef pair<double,double> Pd;
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


double OuterProduct(double ax, double ay, double bx, double by){
    return (ax * by - ay * bx);
}
double OuterProduct(pair<double,double> p,pair<double,double> q){
    double x1 = p.first, y1 = p.second;
    double x2 = q.first, y2 = q.second;
    return OuterProduct(x1,y1,x2,y2);
}

bool Crossing(pair<Pd,Pd> s1,pair<Pd,Pd> s2){
    return 1;//
}



signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
}