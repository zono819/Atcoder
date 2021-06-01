#include<bits/stdc++.h>
using namespace std;
//#define int long long
typedef pair<int,int> P;
typedef long long ll;
#define rep(i,a,n) for(int i=a;i<n;i++)
#define FOR(i,n) for(int i=0;i<n;i++)

int n;
void dfs(string s,char mx){
    if(s.size()==n){
        cout<<s<<endl;
    }
    else{
        for(char c='a';c<=mx;c++){
            dfs(s+c,((c==mx)?(char)(mx+1) : mx));
        }
    }
}

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cin>>n;
    dfs("",'a');
}