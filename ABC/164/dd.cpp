#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,x,y) for(int i=x;i<y;i++)
#define rel(i,x,y) for(int i=x-1;i>=y;i--)
#define all(x) x.begin(),x.end()

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,p;
    string s; cin >> s;
    n = s.length();
    p = 2019;
    ll ans = 0;
    if(p==5 || p==2){
        ll cnt = 1;
        rep(i,0,n)if((s[i]-'0')%p==0)ans +=i+1;
    }else{
        vector<int> pnum(p,0);
        pnum[0] = 1;
        int base = 1;
        int sum=0;
        rel(i,n,0){
            sum = (sum + base * (s[i]-'0')) % p;
            ans += pnum[sum]++;
            base = base * 10 % p;
        }
    }
    cout << ans << endl;

}
