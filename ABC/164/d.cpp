#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> P;
typedef long long ll;
#define rep(i,a,n) for(int i=a;i<n;i++)
#define rrep(i,n,a) for(int i=n;i>=a;i--)
#define FOR(i,n) for(int i=0;i<n;i++)
#define all(s) s.begin(),s.end()
#define vi vector<int>
#define vvi vector<vector<int>>
#define pcnt(n) __builtin_popcount(n)
const int MOD = 2019;

int pw(int a, int x) {
    if (x == 0) return 1;
    int b = pw(a, x / 2);
    b = (b * b) % MOD;
    if (x % 2)
        return (a * b) % MOD;
    return b;
}

string s;
vector<int>r(200010,0);

void mod2019(){
    rep(i,1,200010){
        r[i] = r[i]*pw(10,i-1);
        r[i]%=MOD;
    }
}

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cin>>s;
    int n = s.length();
    int ans = 0;
    rep(i,1,n+1){
        r[n+1-i] = (int)(s[i-1]-'0');
    }
    mod2019();
    for(int i=1;i<n+1;i++){
        r[i]+=r[i-1];
        r[i]%=MOD;
    }
    map<int,int>resi;
    rep(i,0,n+1){
        resi[r[i]]++;
    }
    for(auto x:resi){
        ans += x.second*(x.second-1)/2;
    }
    cout<< ans <<endl;
}