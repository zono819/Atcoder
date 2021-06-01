#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> P;
typedef long long ll;
#define rep(i,a,n) for(int i=a;i<n;i++)
#define vi vector<int>
const int MOD = 1e9 + 7;

vector<int> primedivisors(int n){
    vector<int> ret;
    int tmp = n;
    for(int i=2;i*i<=n;i++){
        if(tmp%i==0){
            ret.push_back(i);
            while(tmp%i==0){
                tmp/=i;
            }
        }
    }
    if(tmp!=1){ret.push_back(tmp);}
    return ret;
}

map<int,int>fa,fb;

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int a,b;
    cin>>a>>b;
    vi da = primedivisors(a),db = primedivisors(b);
    rep(i,0,(int)da.size()){
        int tmp = a;
        while(tmp){
            fa[da[i]]+=tmp/da[i];
            tmp/=da[i];
        }
        cout<<da[i]<<' '<<fa[da[i]]<<endl;
    }
    rep(i,0,(int)db.size()){
        int tmp = b;
        while(tmp){
            fb[db[i]]+=tmp/db[i];
            tmp/=db[i];
        }
        cout<<db[i]<<' '<<fb[db[i]]<<endl;
    }
    int ans = 1;
    for(auto i:fa){
        int tmp = max(i.second - fb[i.first],0LL) + 1;
        ans *= tmp;
        ans%=MOD;
    }
    ans%=MOD;
    cout<<ans<<endl;//failed
}