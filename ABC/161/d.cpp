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

priority_queue<int,vector<int>,greater<int>>ans;
void dfs(int k){
    if(k>=1e10){return;}
    else{
        if(k%10==0){ans.push(k*10);ans.push(k*10+1);dfs(k*10);dfs(k*10+1);}
        else if(k%10==9){ans.push(k*10+8);ans.push(k*10+9);dfs(k*10+8);dfs(k*10+9);}
        else{
            ans.push(k*10+k%10-1);dfs(k*10+k%10-1);
            ans.push(k*10+k%10);dfs(k*10+k%10);
            ans.push(k*10+k%10+1);dfs(k*10+k%10+1);
        }
    }
}

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int k;cin>>k;
    for(int i=1;i<=9;i++){
        ans.push(i);
        dfs(i);
    }
    for(int i=0;i<k-1;i++){
        ans.pop();
    }
    cout<<ans.top()<<endl;
}