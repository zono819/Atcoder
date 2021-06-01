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
const int MOD = 1e9 + 7;
//const int MOD = 998244353;
const int INF = 1e18;


signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    //入力元がtxtになる
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());

    //ここにファイル名
    ofstream filename;
    filename.open("out.txt");

    rep(i,0,10){
        filename<<"ans "<<i<<endl;
    }
    return 0;
}