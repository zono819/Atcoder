#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=a;i<n;i++)
#define FOR(i,n) for(int i=0;i<n;i++)

int n;
vector<int>a(1000010);
void ab(){
    rep(i,0,n-1){
        a[i]=abs(a[i]-a[i+1]);
    }
}
int solve(vector<int> &a){
    int now=a[0];
    queue<int>q1,q2;
    rep(i,1,n-1){
        if((now!=a[i])&&(a[i]!=0)){q1.push(a[i]);now=a[i];}
    }
}
signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    string s;
    cin>>n>>s;
    a.resize(n);
    int now;
    rep(i,0,n){
        a[i]=(int)(s[i]-'0');
    }
    rep(i,0,n-1){
        a[i]=abs(a[i]-a[i+1]);
    }


    /*
    for(int i=n;i>0;i--){
        rep(j,0,i-1){
            a[j]=abs(a[j]-a[j+1]);
        }
    }
    */
    cout<<a[0]<<endl;
}