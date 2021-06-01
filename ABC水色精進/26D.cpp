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
const double PI = 3.141592653589793238462643383279;

double a,b,c;
double func(double t){
    return a*t+b*sin(c*t*PI);
}

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    
    cin>>a>>b>>c;
    double right = (b+100.0)/a;
    double left = 0.0;
    double d = 1e-6;
    while(abs(func(right)-100.0)>=d){
        double m = (left+right)/2.0;
        if(func(m)>100.0){
            right = m;
        }
        else{
            left = m;
        }
    }
    cout << setprecision(20) << right << endl;
}