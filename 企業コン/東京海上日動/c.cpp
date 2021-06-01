#include<bits/stdc++.h>
using namespace std;
//#define int long long
typedef pair<int,int> P;
#define rep(i,a,n) for(int i=a;i<n;i++)
#define rrep(i,n,a) for(int i=n;i>=a;i--)
#define FOR(i,n) for(int i=0;i<n;i++)
#define all(s) s.begin(),s.end()
#define vi vector<int>
#define vvi vector<vector<int>>

int n,k;
vi imos(200010,0);
void display(vector<int>&a){
    rep(i,0,n){
        cout<<a[i];
        if(i!=n-1){cout<<' ';}
    }
    cout<<endl;
}

void query(vector<int>&a){
    rep(i,0,n){
        imos[max(0,i-a[i])]++;
        imos[min(200001,i+a[i]+1)]--;
        }
    rep(i,1,200010){
        imos[i]+=imos[i-1];
    }
    rep(i,0,n){
        a[i]=imos[i];
        imos[i]=0;
    }
}



signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cin>>n>>k;
    vi a(n);
    rep(i,0,n){
        cin>>a[i];
    }
    if(k > 1+(int)(-1+sqrt(-1+8*n))/2){
        rep(i,0,n){
            a[i]=n;
        }
    }
    else{rep(i,0,k)query(a);}
    rep(i,0,n){
        cout<<a[i];
        if(i!=n-1){cout<<' ';}
    }
    cout<<endl;
}