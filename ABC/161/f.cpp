#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,a,n) for(int i=a;i<n;i++)
#define FOR(i,n) for(int i=0;i<n;i++)

map<int,int> pf(int N){
    map<int,int> ret;
    for(int i=2;i*i<=N;i++){
        while(N%i==0){
            ret[i]++;
            N/=i;
        }
    }
    if(N!=1){ret[N]++;}
    return ret;
}

vector<int> divisor(int n){
    vector<int>ret;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            ret.push_back(i);
            if(i*i!=n){ret.push_back(n/i);}
        }
    }
    return ret;
}

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,ans=0;
    cin>>n;
    map<int,int>fac_1 = pf(n-1);
    int c_1 = 1;
    for(auto i:fac_1){
        c_1*=(i.second+1);
    }
    c_1--;
    ans+=c_1;
    ans++;//Nのぶん
    vector<int>div = divisor(n);
    for(int i=0;i<(int)div.size();i++){
        if(div[i]*div[i]>n){continue;}
        else if(div[i]*div[i]==n){ans++;}
        else{
            int tmp = n;
            while(tmp%div[i]==0){tmp/=div[i];}
            if(tmp%div[i]==1){ans++;}
            }
    }
    cout<<ans<<endl;
}