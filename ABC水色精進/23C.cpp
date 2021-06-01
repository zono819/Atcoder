#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,a,n) for(int i=a;i<n;i++)

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int k,n,R,C,ans = 0;
    cin>>R>>C>>k>>n;
    vector<int>r(n),c(n),row(R+1,0),col(C+1,0);
    rep(i,0,n){
        cin>>r[i]>>c[i];
        row[r[i]]++;
        col[c[i]]++;
    }
    map<int,int>RO,CO;
    rep(i,1,R+1){
        RO[row[i]]++;
    }
    rep(i,1,C+1){
        CO[col[i]]++;
    }
    for(auto i:RO){
        int tmp =  k - i.first;
        if(tmp<0){continue;}
        else{
            ans += CO[tmp] * i.second;
        }
    }
    rep(i,0,n){
        if(row[r[i]]+col[c[i]]==k+1){ans++;}
        else if(row[r[i]]+col[c[i]]==k){ans--;}
    }
    cout<<ans<<endl;
}